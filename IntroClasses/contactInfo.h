//A more practical example of destructor.

#ifndef CONTACTINFO_H
#define	CONTACTINFO_H
#include <cstring>	//needed for strlen and strcpy

class ContactInfo
{
private:
	char* name;
	char* phone;
public:
	//Build the constructor
	ContactInfo(char *n, char *p)
	{
		name = new char[strlen(n) + 1];
		phone = new char[strlen(p) + 1];

		//copy the name and phone number to the allocated memory
		strcpy(name, n);
		strcpy(phone, p);
	}
	//deconstructor
	~ContactInfo() 
	{ delete [] name; 
	  delete [] phone; }

	const char *getName() const { return name; }
	const char *getPhone() const { return phone; }

};
#endif // !CONTACTINFO_H
