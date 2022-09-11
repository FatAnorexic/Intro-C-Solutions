

#ifndef NUMBERARRAY2_H
#define NUMBERARRAY2_H

class Nac
{
private:
	int size;
	double* value;
	bool isValid(int) const;	//boolean check to ensure num elements >0 and <size
public:
	Nac(int = 10);		//constructor initial value of 10
	~Nac() { delete[] value; }	//destructor to remove the array from memory.

	void setElement(int, double);	//mutator->below are the accessors

	double getElem(int) const;
	double getHigh() const;
	double getLow() const;
	double getAverage() const;

};
#endif // !NUMBERARRAY2_H
