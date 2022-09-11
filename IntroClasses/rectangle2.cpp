
#include "rectangle2.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Rectangle2::Rectangle2()
{
	width = 0.0;
	length = 0.0;
}

void Rectangle2::setWidth(double w)
{
	if (w >= 0)
		width = w;
	else
	{
		cout << "Invalid width\n";
		exit(EXIT_FAILURE);
	}
}

void Rectangle2::setLength(double len)
{
	if (len >= 0)
		length = len;
	else
	{
		cout << "Invalid length\n";
		exit(EXIT_FAILURE);
	}
}