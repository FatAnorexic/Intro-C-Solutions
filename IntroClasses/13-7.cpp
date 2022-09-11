//Demonstrating how a constructor works.
//It is a function that has the same name as the class
//and is automatically called when the object is created in memory.
//Think of them as initialization routines.
/*
#include <iostream>
using namespace std;

class Demo
{
public:
	Demo();	//constructor
};

Demo::Demo() { cout << "Welcome to the constructor!\n"; }

int main()
{
	//Demo demoObj;

	cout << "This demonstrates an object with a constructor.\n";
	cout << "This is displayed before the constructor.\n";
	Demo demObj;
	cout << "This is displayed after.\n";

	system("pause");
	return 0;
}

*/

/*Notice Demo::Demo() has no return type-not even void. This is becuase constructors
are not executed by explicit funcion calls and cannot return a value.
This simple Demo example illustrates when a constructor executes. More importantly, you
should understand why a class should have a constructor. A constructor’s purpose is to
initialize an object’s attributes. Because the constructor executes as soon as the object is
created, it can initialize the object’s data members to valid values before those members
are used by other code. It is a good practice to always write a constructor for every class.*/