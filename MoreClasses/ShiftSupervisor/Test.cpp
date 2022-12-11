#include <iostream>
#include <string>
#include "ShiftSupervisor.h"

int main() {
	ShiftSupervisor boss("Alex B", "1140AB", 2016, 75000.00, 15000.00);

	std::cout << "Name: " << boss.getName() << " ID: " << boss.getID() << "\n"
		<< "Start Date: " << boss.getStartDate() << "\n"
		<< "Salary: $" << boss.getSalary() << " Prodcution Bonus: $" << boss.getProdBonus() << "\n";

	return 0;
}