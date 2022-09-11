/*
#include <iostream>
#include "IntegerList.h"
using namespace std;

int main()
{
	const int SIZE = 20;
	IntegerList numbers(SIZE);
	int val, x;

	//store 9's in the list with an * everytime it's successfully stored.

	for (x = 0; x < SIZE; x++)
	{
		numbers.setElement(x, 9);
		cout << "* ";
	}
	cout << endl;
	
	//display the 9's
	for (x = 0; x < SIZE; x++)
	{
		val = numbers.getElement(x);
		cout << val << " ";
	}
	cout << endl;

	//numbers.setElement(50, 9);
	
	system("pause");
	return 0;
}
*/