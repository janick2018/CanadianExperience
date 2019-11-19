#include "pch.h"
#include "FruitBasket.h"

void CFruitBasket::DrawBasket(Gdiplus::Graphics* graphics)
{
	CRotatedBitmap basket;
	basket.LoadImageW(L"images/basket.png");
	
	basket.SetCenter(Point(60, 60));
	basket.DrawImage(graphics, Point(mX, mY - 100), 0);

	basket.LoadImageW(L"images/leaf.png");
	basket.SetCenter(Point(20, 20));
	basket.DrawImage(graphics, Point(mX + 100, mY - 300), 0);

	

	if (mAdded) {
		CRotatedBitmap apple;
		apple.LoadImageW(L"images/orange.png");
		apple.SetCenter(Point(50, 57.5));
		apple.DrawImage(graphics, Point(mX, mY - 200), 3.14 / 2);
	}

}
