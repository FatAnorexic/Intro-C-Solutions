

#ifndef RECTANGLE2_H
#define RECTANGLE2_H

class Rectangle2
{
private:
	double width;
	double length;
public:
	Rectangle2();
	void setWidth(double);
	void setLength(double);

	double getWidth() const { return width; }	//These are called inline functions as they're declared
	double getLength() const { return length; }	//in the class declaration.
	double getArea() const { return width * length; }
};
#endif // !RECTANGLE2_H
