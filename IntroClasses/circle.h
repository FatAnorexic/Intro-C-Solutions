
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
private:
	double radius;
	const double pi = 3.14159;
public:
	Circle()	//default constructor
	{
		radius = 0.0;
	}
	Circle(double r)	//constructor
	{
		radius = r;
	}

	void setRadius(double r) { radius = r; }

	double getRadius() const { return radius; }
	double getArea() const { return pi * radius * radius; }
	double getDiameter() const { return radius * 2; }
	double getCircumfrence() const { return 2 * pi * radius; }
};
#endif // !CIRCLE_H
