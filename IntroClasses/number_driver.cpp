
/*
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include "numberArray.h"
using namespace std;


int main()
{
	int size;
	unsigned seed = time(0);
	double value;

	cout << "Enter the size of the array: ";
	cin >> size;

	NumberArray arr(size);

	srand(seed);

	for (int i = 0; i < size; i++)
	{
		value = rand();
		arr.setElem(i, value);
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr.getElem(i) << endl;
	}

	cout << endl << arr.getHigh() << endl << endl;
	cout << arr.getLow() << endl << endl;
	cout << arr.getAverage() << endl << endl;
	

	return 0;
}*/