#include <iostream>
#include "ProductionWorker.h"
#include <string>

void setInfo(ProductionWorker&);
void displayInfo(ProductionWorker);

int main() {
	ProductionWorker emp1;
	setInfo(emp1);
	displayInfo(emp1);

	return 0;
}

void setInfo(ProductionWorker& employee) {
	std::string name, id; int startDate, shift;
	double payRate;

	std::cout << "Enter the name followed by ID number of the employee: ";
	std::getline(std::cin, name); std::getline(std::cin, id);

	std::cout << "\n\nEnter their start date and the shift they work: ";
	std::cin >> startDate >> shift;

	std::cout << "\nWhat is their pay rate per hour: ";
	std::cin >> payRate;

	employee.setName(name), employee.setID(id), employee.setStartDate(startDate);
	employee.setShift(shift), employee.setPayRate(payRate);
}

void displayInfo(ProductionWorker emp) {
	std::cout << "Name:\t" << emp.getName() << "\n";
	std::cout << "ID #:\t" << emp.getID() << "\n"
		<< "Start Date:\t" << emp.getStartDate() << "\n"
		<< "Shift:\t" << emp.getShift() << "\n"
		<< "Pay Rate:\t" << emp.getPayRate() << "\n";
}