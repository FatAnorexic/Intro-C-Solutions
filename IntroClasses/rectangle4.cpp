

#include "rectangle4.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Rectangle4::Rectangle4(double w, double len)
{
	width = w;
	length = len;
}

void Rectangle4::setWidth(double w)
{
	if (w >= 0)
		width = w;
	else
	{
		cout << "Invalid Width\n";
		exit(EXIT_FAILURE);
	}
}

void Rectangle4::setLength(double len)
{
	if (len >= 0)
		length = len;
	else
	{
		cout << "Invalid length\n";
		exit(EXIT_FAILURE);
	}
}