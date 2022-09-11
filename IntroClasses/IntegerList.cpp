
#include <iostream>
#include <cstdlib>
#include "IntegerList.h"
using namespace std;

//constructor sets each element to zero

IntegerList::IntegerList(int size)
{
	list = new int[size];
	numElements = size;
	for (int ndx = 0; ndx < size; ndx++)
		list[ndx] = 0;
}

//destructor to release the allocated memory

IntegerList::~IntegerList()
{
	delete[] list;
}

//isValid() returns true if the argument is a valid subscript, or false otherwise.

bool IntegerList::isValid(int element) const
{
	bool status;

	if (element < 0 || element >= numElements)
		status = false;
	else
		status = true;
	return status;
}

//setElement stores a value in an element of the list. If it is an invalid subscript the program aborts.

void IntegerList::setElement(int element, int value)
{
	if (isValid(element))
		list[element] = value;
	else
	{
		cout << "Error: Invalid input.\n";
		exit(EXIT_FAILURE);
	}
}

//getElement() returns the value stored at a specific element, if invalid, it aborts

int IntegerList::getElement(int element) const
{
	if (isValid(element))
		return list[element];
	else
	{
		cout << "Error: Invalid Subscript.\n";
		exit(EXIT_FAILURE);
	}
}