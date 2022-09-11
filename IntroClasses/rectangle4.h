

#ifndef RECTANGLE4_H
#define RECTANGLE4_H

class Rectangle4
{
private:
	double width, length;
public:
	Rectangle4(double, double);	//constructor
	void setWidth(double);
	void setLength(double);

	double getWidth() const { return width; }
	double getLength() const { return length; }
	double getArea() const { return width * length; }

};
#endif // !RECTANGLE4_H
