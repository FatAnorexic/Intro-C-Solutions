/*

#include <iostream>
#include <string>
#include <memory>
#include "car.h"
using namespace std;

int main()
{
	int year; string make;

	cout << "Enter the year of your vehicle: ";
	cin >> year;
	cin.ignore();
	cout << "Enter the make of your car: ";
	getline(cin, make);

	unique_ptr<Car>car(new Car(year, make));

	//calling the accelerate function 5 times
	cout << "Accelerating the " << car->getYear() << " " << car->getMake() << endl;
	for (int i=0; i < 5; i++)
		car->accelerate();
	cout << "\nThe speed is now: " << car->getSpeed()<<endl;

	//calling the brake function 5 times
	cout << "Now decelerating the " << car->getYear() << " " << car->getMake() << endl;
	for (int i = 0; i < 5; i++)
		car->brake();
	cout << "\nThe speed is now: " << car->getSpeed() << endl;

	system("pause");
	return 0;
}
*/