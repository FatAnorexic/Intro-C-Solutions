#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include "Employee.h"

class ProductionWorker :public Employee
{
private:
	static int shift; double payRate;

public:
	ProductionWorker() :Employee() {
		shift = 1;
		payRate = 0.0;
	}

	ProductionWorker(std::string, std::string, int, int, double);

	void setShift(int);
	void setPayRate(double p) { payRate = p; }

	int getShift() const { return shift; }
	double getPayRate() const { return payRate; }
};
#endif // !PRODUCTIONWORKER_H
