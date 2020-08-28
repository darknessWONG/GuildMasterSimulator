#include "Title.h"
#include <iostream>
using namespace std;

Title::Title()
{
	isDraw = true;
}

void Title::Print() const
{
	cout << "=============================================" << endl;
	cout << "==========Guild Master Simulator=============" << endl;
	cout << "=============press any key===================" << endl;
	cout << "=============================================" << endl;
}
