#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H
#include "../Employees and Production/Employee.h"

class ShiftSupervisor :public Employee
{
private:
	double salary, prodBonus;
public:
	ShiftSupervisor() :Employee() {
		salary = 0.0, prodBonus = 0.0;
	}

	ShiftSupervisor(std::string n, std::string id, int y, double s, double pb) :
		Employee(n, id, y) {
		salary = s;
		prodBonus = pb;
	}

	void setSalary(double s) { salary = s; }
	void setProdBonus(double pb) { prodBonus = pb; }

	double getSalary() const { return salary; }
	double getProdBonus() const { return prodBonus; }
};

#endif // !SHIFTSUPERVISOR_H
