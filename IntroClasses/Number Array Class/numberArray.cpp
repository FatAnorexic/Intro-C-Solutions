
#include <cstdlib>
#include <iostream>
#include "numberArray.h"
using namespace std;

/*the constructor has a default size of 10, but will accept an integer argument by
the programer-it will then take that argument and use a for loop to set each element
to zero. The programmer can that call the setElem(), which has been kept extremely 
simple deliberately to allow for robust manipulation.*/

NumberArray::NumberArray(int s)
{
	value = new double[s];
	size = s;
	for (int ndx = 0; ndx < s; ndx++)
		value[ndx] = 0.0;
}
//Used to free up memory
NumberArray::~NumberArray()
{
	delete[] value;
}

bool NumberArray::isValid(int element) const
{
	bool status;
	if (element < 0 || element >= size)
		status = false;
	else
		status = true;
	return status;
}

/*The setElem(int, double) function is a mutator which will call the isValid bool function. It will run
a check to see if the element being called is within the bounds of the array. If it is not, the status
will return false and the exit code will execute. If it is, the value[index] will be assigned the double
val for that particular element. This is kept simple so that it may be used in both a loop, or as a simple 
manual input basis. As a note to the programer: the element must be less than the size assigned when 
the constructor was called, and must not be negative. If no argument was given to the constructor,
it initialized the list at 10 elements.*/

void NumberArray::setElem(int element, double val)
{
	if (isValid(element))
		value[element] = val;
	else
	{
		cout << "Error: Invalid Input.\n";
		exit(EXIT_FAILURE);
	}
}

/*Just like the setElem() function this accessor runs a check to see if the given argument is valid. And
Just like the mutator, it must be within the bounds of the argument given to the constructor.*/

double NumberArray::getElem(int element) const
{
	if (isValid(element))
		return value[element];
	else
	{
		cout << "Error:Invalid input.\n";
		exit(EXIT_FAILURE);
	}
}

/*The getHigh() and getLow() functions will use selection sort to optain the highest and
lowest values and return them.*/

double NumberArray::getHigh() const
{
	int start, maxIndex;
	double maxValue;
	for (start = 0; start < (size - 1); start++)
	{
		maxIndex = start;
		maxValue = value[start];
		for (int index = start + 1; index < size; index++)
		{
			if (value[index] > maxValue)
			{
				maxValue = value[index];
				maxIndex = index;
			}
		}
		value[maxIndex] = value[start];
		value[start] = maxValue;
	}
	return value[size];
}

double NumberArray::getLow() const
{
	int minI, start;
	double minVal;
	for (start = 0; start < (size - 1); start++)
	{
		minI = start;
		minVal = value[start];
		for (int index = start + 1; index < size; index++)
		{
			if (value[index] < minVal)
			{
				minVal = value[index];
				minI = index;
			}
		}
		value[minI] = value[start];
		value[start] = minVal;
	}
	return value[0];
}

/*The getAverage() function will sum the numbers in the array, and divide them by the size of the array. It 
will then return the average value.*/

double NumberArray::getAverage() const
{
	double sum=0, average;
	for (int i = 0; i < size; i++)
		sum += value[i];
	average = sum / size;
	return average;
}
