

#ifndef NUMBERARRAY_H
#define NUMBERARRAY_H

class NumberArray
{
private:
	int size;
	double* value;
	bool isValid(int) const;//A simple check to ensure the array is not thrown a negative or too high value
public:
	//Constructor that accepts a number of elements-has no initial boundry condition.
	NumberArray(int=10);
	~NumberArray();	//Destructor that deletes the array and frees up memory.
	
	//Mutator to set any number to any element of the array. 
	void setElem(int, double);

	//accessors
	double getElem(int) const;
	double getHigh() const;	//Notes and function details in numberArray.cpp
	double getLow() const;
	double getAverage() const;
};
#endif // !NUMBERARRAY_H
