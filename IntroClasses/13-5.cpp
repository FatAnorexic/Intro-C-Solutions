/*
#include <iostream>
#include <memory>
#include "Rectangle2.h"
using namespace std;

int main()
{
	unique_ptr<Rectangle2>kitchen(new Rectangle2);
	double num, area;
	cout << "Kitchen lenght: ";
	cin >> num;
	kitchen->setLength(num);
	cout << "Kitchen width: ";
	cin >> num;
	kitchen->setWidth(num);

	area = kitchen->getArea();

	cout << "Kitchen area: " << area << endl;
	return 0;
}
*/