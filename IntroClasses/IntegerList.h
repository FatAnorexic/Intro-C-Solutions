//Spec file for integer list class, and using abstract array data types

#ifndef INTEGERLIST_H
#define INTEGERLIST_H

class IntegerList
{
	//private will consist of an int pointer list, an int numElem, and a bool isValid.
private:
	int* list;
	int numElements;
	bool isValid(int) const;
	//public will have a constructor calling an int, a destructor and a mutator and accessor.
public:
	IntegerList(int);
	~IntegerList();	//destructor
	void setElement(int, int);	//sets the two int variables
	int getElement(int) const;	//returns based off int and int reference
};
#endif // !INTEGERLIST_H
