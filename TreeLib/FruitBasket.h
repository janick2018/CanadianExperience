#pragma once


#include <string>
#include <vector>
#include <memory>
#include "pch.h"
#include "RotatedBitmap.h"

using namespace Gdiplus;

class CFruit;

class CFruitBasket
{

private:

	int mX =0 ;  ///< Basket X location
	int mY = 0;  ///< Basket Y location
	bool mAdded = false;  ///< Add has been called?


	CRotatedBitmap mBasket;



public:

	virtual ~CFruitBasket()
	{
		mX = 0;
		mY = 0;
	}
	CFruitBasket() {

	}



public:
	/**
   * Set the position for the basket.
   * \param x X location (pixels)
   * \param y Y location (pixels)
   */
	void SetBasketLocation(int x, int y) { mX = x; mY = y; }

	void DrawBasket(Gdiplus::Graphics* graphics);
	/**
	* Empty all fruit from the basket
	*/
	void EmptyBasket() { mAdded = false; }


	void AddToBasket(std::vector < std::shared_ptr<CFruit>> fruit) { mAdded = true; }
};


