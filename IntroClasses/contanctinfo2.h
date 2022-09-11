

#ifndef CONTACTINFO_H
#define CONTACTINFO_H
#include <cstring>

class ContactInfo2
{
private:
	char* name;
	char* phone;

	//Private member function, can only be called internally.
	void initName(char* n)
	{
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}

	void initPhone(char* p)
	{
		phone = new char[strlen(p) + 1];
		strcpy(phone, p);
	}
public:
	//constructor
	ContactInfo2(char* n, char* p)
	{
		initName(n);
		initPhone(p);
	}

	//deconstructor
	~ContactInfo2()
	{
		delete[] name;
		delete[] phone;
	}

	const char* getName() const { return name; }
	const char* getPhone() const { return phone; }
};

#endif // !CONTACTINFO_H
