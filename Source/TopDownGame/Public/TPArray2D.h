#pragma once

#include "CoreMinimal.h"
#include "Containers/Array.h"
#include "Math/IntPoint.h"

#include <type_traits>

template<typename InElementType>
class TOPDOWNGAME_API TTPArray2D {
	
public:

	using FInElementType = typename InElementType;
	using FElementPointer = typename std::add_pointer_t<InElementType>;
	using FElementReference = typename std::add_rvalue_reference_t<InElementType>;
	using FArrayType = typename TArray<InElementType>;

	TTPArray2D();
	~TTPArray2D() noexcept = default;

	bool IsValidLocation(const FIntPoint& Location) const;

	int32 FlatLocation(const FIntPoint& Location) const;

	void Resize(const FIntPoint& NewSize);

	const FIntPoint& GetSize() const;

	FElementPointer GetElement(const FIntPoint& ElementLocation) noexcept;

	

private:

	FIntPoint Size;
	FArrayType Array;

};

template<class InElementType>
TTPArray2D<InElementType>::TTPArray2D()
	: Size(0, 0)
{

}

template<typename InElementType>
bool TTPArray2D<InElementType>::IsValidLocation(const FIntPoint& Location) const
{
	bool bIsXLocationValid = 0 <= Location.X && Location.X < Size.X;
	if (bIsXLocationValid)
	{
		bool bIsYLocationValid = 0 <= Location.Y && Location.Y < Size.Y;
		if (bIsYLocationValid)
		{
			return true;
		}
	}

	return false;
}

template<typename InElementType>
int32 TTPArray2D<InElementType>::FlatLocation(const FIntPoint& Location) const
{
	return (Size.X * Location.Y) + Location.X;
}

template<class InElementType>
void TTPArray2D<InElementType>::Resize(const FIntPoint& NewSize)
{
	Size = NewSize;
	Array.Init(InElementType(), Size.X * Size.Y);
}

template<class InElementType>
const FIntPoint& TTPArray2D<InElementType>::GetSize() const
{
	return Size;
}

template<class InElementType>
typename TTPArray2D<InElementType>::FElementPointer TTPArray2D<InElementType>::GetElement(const FIntPoint& ElementLocation) noexcept
{
	if (IsValidLocation(ElementLocation)) {

		int32 FlatedLocation = FlatLocation(ElementLocation);

		return &Array[FlatedLocation];

	}

	return nullptr;
}