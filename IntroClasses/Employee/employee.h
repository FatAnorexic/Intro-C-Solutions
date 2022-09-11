/*Write a class named Employee that has the following member variables:
• name. A string that holds the employee’s name.
• idNumber. An int variable that holds the employee’s ID number.
• department. A string that holds the name of the department where the employee
works.
• position. A string that holds the employee’s job title.
The class should have the following constructors:
• A constructor that accepts the following values as arguments and assigns them to
the appropriate member variables: employee’s name, employee’s ID number, department,
and position.
• A constructor that accepts the following values as arguments and assigns them to the
appropriate member variables: employee’s name and ID number. The department
and position fields should be assigned an empty string ( "" ).
• A default constructor that assigns empty strings ( "" ) to the name , department , and
position member variables, and 0 to the idNumber member variable.
Write appropriate mutator functions that store values in these member variables and
accessor functions that return the values in these member variables. Once you have
written the class, write a separate program that creates three Employee objects to hold
the following data.
Name ID Number Department Position
Susan Meyers 47899 Accounting Vice President
Mark Jones 39119 IT Programmer
Joy Rogers 81774 Manufacturing Engineer
The program should store this data in the three objects and then display the data for
each employee on the screen.*/

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee
{
private:
	string name, department, position;
	int idNumber;
public:
	//default constructor
	Employee()
	{
		name = "";
		department = "";
		position = "";
		idNumber = 0;
	}
	//Second constructor with name and ID number, but blank departments and positions
	Employee(string n, int id)
	{
		name = n;
		idNumber = id;
		department = "";
		position = "";
	}

	//Last constructor, that accepts arguments for all private variables.
	Employee(string n, int id, string d, string p)
	{
		name = n;
		idNumber = id;
		department = d;
		position = p;
	}

	//simple mutator functions to allow mutation of private methods. 
	void setName(string n) { name = n; }
	void setId(int id) { idNumber = id; }
	void setDep(string d) { department = d; }
	void setPos(string p) { position = p; }

	//Finally accessor methods to call and grab all the info.
	string getName() const { return name; }
	int getId() const { return idNumber; }
	string getDep()	const { return department; }
	string getPos()	const { return position; }
};
#endif // !EMPLOYEE_H
