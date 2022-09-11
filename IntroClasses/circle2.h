

#ifndef CIRCLE2_H
#define CIRCLE2_H

class Circle2
{
private:
	double radius, PI = 3.14159;
public:
	Circle2()
	{
		radius = 0.0;	//default constructor
	}
	Circle2(double r)
	{
		radius = r;
	}

	//mutator functions
	void setradius(double r) { radius = r; }
	//accessor functions
	double getradius() const { return radius; }
	double getarea() const { return PI * radius * radius; }
	double getdiameter() const { return radius * 2; }
	double getcircumfrence() const { return 2 * PI * radius; }
};
#endif // !CIRCLE2_H
