//The first instance of what a class is in C++, get comfy, shit's about to get wild.
/*
#include <iostream>
#include <memory>
using namespace std;

//Create the Rectangle class, along with it's private and public members. Think of private members as the internal brain structure and thought processes,
//and public members as accessors and mutators of those thought processes. 

class Rectangle
{
private:
	double length;	//While private, these may only be accessed by funtions and meathods within the Rect. class declaration. 
	double width;	//This is to keep data consistent, and avoid unwanted alterations to the "brain stem" of the class.
public:
	void setWidth(double);	//Mutators are exactly as they sound, they mutate the data.
	void setLength(double);
	double getWidth() const;	//Accessors-as often as you can, should be set with a const declaration, as to avoid mutating the data when accessed.
	double getLength() const;
	double getArea() const;
};

/*Unlike python where you define the actual class structures within the class declaration, in C++ you define the classes outside of the main call.
instead of using def __init__() as the data structurs, accessors and mutators, you define the parameters of the class, then outside of it use calls like
void Rectangle::setWidth(double w){statments}*/
/*
void Rectangle::setWidth(double w) { width = w; }
//Another way is to write it in a the tradional format-more common for complex mutators and accessors.
void Rectangle::setLength(double len)
{
	length = len;
}

double Rectangle::getWidth() const { return width; }//With the const declaration inside the class, you must call it when defining the mutators and accessors.
double Rectangle::getLength() const { return length; }
double Rectangle::getArea() const
{
	return length * width;
}*/
/*
int main()
{
	Rectangle box;	//this is the call for the class(blueprint) to create an object named box.
	double rectWidth;
	double rectLength;

	cout << "Enter the width: ";
	cin >> rectWidth;
	cout << "Now enter the length: ";
	cin >> rectLength;

	box.setWidth(rectWidth);
	box.setLength(rectLength);

	cout << "\nHere is the data:\n"
		<< "Width: " << box.getWidth() << endl
		<< "Length: " << box.getLength() << endl
		<< "Area: " << box.getArea() << endl;
	return 0;
}*/

//A more thorough definition of how classes can be used is shown below:
/*
int main()
{
	Rectangle kitchen, bedroom, den;
	double num, totalArea;

	cout << "Enter the length of the kitchen: ";
	cin >> num;
	kitchen.setLength(num);
	cout << "Enter the width of the kitchen: ";
	cin >> num;
	kitchen.setWidth(num);

	cout << "Enter the length of the bedroom: ";
	cin >> num;
	bedroom.setLength(num);
	cout << "Enter the width of the bedroom: ";
	cin >> num;
	bedroom.setWidth(num);

	cout << "Enter the length of the den: ";
	cin >> num;
	den.setLength(num);
	cout << "Enter the width of the ded: ";
	cin >> num;
	den.setWidth(num);

	totalArea = kitchen.getArea() + bedroom.getArea() + den.getArea();

	cout << "The total area of the living quarters is: " << totalArea << endl;

	return 0;
}
*/

//We will now demonstrate using pointers with classes to create references to adresses in memory using objects.
/*
int main()
{
	double num, totalArea;
	Rectangle* kitchen = nullptr, * bedroom = nullptr, * den = nullptr;

	kitchen = new Rectangle, bedroom = new Rectangle, den = new Rectangle;

	cout << "Kitchen length: ";
	cin >> num;
	kitchen->setLength(num);
	cout << "Kitchen width: ";
	cin >> num;
	kitchen->setWidth(num);

	cout << "Bedroom length: ";
	cin >> num;
	bedroom->setLength(num);
	cout << "Bedroom width: ";
	cin >> num;
	bedroom->setWidth(num);

	cout << "Den length: ";
	cin >> num;
	den->setLength(num);
	cout << "Den width: ";
	cin >> num;
	den->setWidth(num);

	totalArea = kitchen->getArea() + den->getArea() + bedroom->getArea();

	cout << "The total area of the house is: " << totalArea << endl;

	delete kitchen, bedroom, den;
	kitchen = nullptr, den = nullptr, bedroom = nullptr;

	return 0;
}
*/
//Using smart pointers with classes to automatically unallocate memory when certain things are not in use. 
/*
int main()
{
	double num, totalArea;
	unique_ptr<Rectangle>kitchen(new Rectangle); unique_ptr<Rectangle>bedroom(new Rectangle);
	unique_ptr<Rectangle>den(new Rectangle);

	cout << "Kitchen length: ";
	cin >> num;
	kitchen->setLength(num);
	cout << "Kitchen Width: ";
	cin >> num;
	kitchen->setWidth(num);

	cout << "Bedroom length: ";
	cin >> num;
	bedroom->setLength(num);
	cout << "Bedroom width: ";
	cin >> num;
	bedroom->setWidth(num);

	cout << "Den length: ";
	cin >> num;
	den->setLength(num);
	cout << "Den width: ";
	cin >> num;
	den->setWidth(num);

	totalArea = kitchen->getArea() + bedroom->getArea() + den->getArea();

	cout << "The total area: " << totalArea << endl;

	return 0;
}
*/