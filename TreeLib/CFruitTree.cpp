#include "pch.h"
#include "CFruitTree.h"
#include <sstream>


using namespace Gdiplus;
CFruitTree::CFruitTree()
{
}

CFruitTree::~CFruitTree()
{
}

void CFruitTree::DrawTree(Gdiplus::Graphics* graphics)
{
	
	Pen pen(Color(139, 69, 19), (REAL)3);
	pen.SetEndCap(LineCapRound);

	graphics->DrawLine(&pen, (REAL)mX, (REAL)mY, (REAL)(mX), (REAL)(mY - 100));

}


