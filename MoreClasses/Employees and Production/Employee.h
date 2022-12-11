#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee
{
private:
	std::string empName, empID;
	int startDate;

public:
	Employee() {
		empName = "";
		empID = "";
		startDate = 1980;
	}

	Employee(std::string n, std::string id, int y) {
		empName = n;
		empID = id;
		startDate = y;
	}

	void setName(std::string n) { empName = n; }
	void setID(std::string id) { empID = id; }
	void setStartDate(int y) { startDate = y; }

	std::string getName() const { return empName; }
	std::string getID() const { return empID; }
	int getStartDate() const { return startDate; }
};
#endif // !EMPLOYEE_H
