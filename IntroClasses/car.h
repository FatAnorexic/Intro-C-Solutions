/*Write a class named Car that has the following member variables:
• yearModel . An int that holds the car’s year model.
• make . A string that holds the make of the car.
• speed . An int that holds the car’s current speed.

In addition, the class should have the following constructor and other member functions.
• Constructor. The constructor should accept the car’s year model and make as arguments.
These values should be assigned to the object’s yearModel and make member
variables. The constructor should also assign 0 to the speed member variables.
• Accessor. Appropriate accessor functions to get the values stored in an object’s
yearModel , make , and speed member variables.
• accelerate . The accelerate function should add 5 to the speed member variable
each time it is called.
• brake . The brake function should subtract 5 from the speed member variable each
time it is called.
Demonstrate the class in a program that creates a Car object, and then calls the
accelerate function five times. After each call to the accelerate function, get
the current speed of the car and display it. Then, call the brake function five times.
After each call to the brake function, get the current speed of the car and display it.*/

#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;

class Car
{
private:
	int yearModel;
	string make;
	int speed;
public:
	//Constructor that accepts arguments for make and year-speed set to 0
	Car(int year, string m)
	{
		yearModel = year;
		make = m;
		speed = 0;
	}
	//Mutator functions accelerate and brake
	void accelerate() { speed += 5; }
	void brake() { speed -= 5; }

	//accessor functions getYear, getModel, getSpeed
	int getYear() { return yearModel; }
	string getMake() { return make; }
	int getSpeed() { return speed; }
};
#endif // !CAR_H
