
#include <iostream>
#include <cstdlib>
#include "numberArray2.h"
using namespace std;

Nac::Nac(int s)
{
	size = s;
	value = new double[s];
	for (int ndx = 0; ndx < size; ndx++)
		value[ndx] = 0.0;
}

bool Nac::isValid(int elem) const
{
	if (elem >= 0 && elem <= size)
		return true;
	else
		return false;
}