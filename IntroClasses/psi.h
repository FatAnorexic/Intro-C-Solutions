/*Design a class that holds the following personal data: name, address, age, and phone
number. Write appropriate accessor and mutator functions. Demonstrate the class by
writing a program that creates three instances of it. One instance should hold your information,
and the other two should hold your friends’ or family members’ information.*/

#ifndef PSI_H
#define PSI_H
#include<string>
using namespace std;

class Personal
{
private:
	string name, address, phone;
	int age;

public:
	//constructor
	Personal(string n, string a, int ag, string p)
	{
		name = n;
		address = a;
		age = ag;
		phone = p;
	}

	//Mutators
	void setName(string n) { name = n; }
	void setAdd(string a) { address = a; }
	void setAge(int ag) { age = ag; }
	void setPhone(string p) { phone = p; }

	//accessors
	string getName() const { return name; }
	string getAdd() const { return address; }
	int getAge() const { return age; }
	string getPhone() const { return phone; }
};
#endif // !PSI_H
