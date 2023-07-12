

#include <iostream>
#include <memory>
#include "car.h"


int main(){
	int year; std::string make;

	printf("Enter the year of your vehicle: ");
	std::cin >> year;
	std::cin.ignore();
	printf("Enter the make of your car: ");
	std::getline(std::cin, make);

	std::unique_ptr<Car>car(new Car(year, make));

	//calling the accelerate function 5 times
	std::cout << "Accelerating the " << car->getYear() << " " << car->getMake() << '\n';
	for (int i=0; i < 5; i++)
		car->accelerate();
	std::cout << "\nThe speed is now: " << car->getSpeed()<<'\n';

	//calling the brake function 5 times
	std::cout << "Now decelerating the " << car->getYear() << " " << car->getMake() << '\n';
	for (int i = 0; i < 5; i++)
		car->brake();
	std::cout << "\nThe speed is now: " << car->getSpeed() << '\n';

	system("pause");
	return 0;
}

