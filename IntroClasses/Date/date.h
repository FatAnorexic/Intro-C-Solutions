//spec file for date.cpp
/*the class will have three private members-day, month, year, and there will be
at least three accessors allowing for the printing of 12/25/2014, december 25, 2014
and 25 december 2014. There will also be a bool private function that determines if the 
dates are valid. The constructor acts as the mutator, applying the dates, then running
the isValid() function to check if the numbers given are within limits.*/

/*Design a class called Date . The class should store a date in three integers: month , day ,
and year . There should be member functions to print the date in the following forms:
12/25/2014
December 25, 2014
25 December 2014
Demonstrate the class by writing a complete program implementing it.
Input Validation: Do not accept values for the day greater than 31 or less than 1. Do
not accept values for the month greater than 12 or less than 1.*/

#ifndef DATE_H
#define DATE_H
#include <string>


class Date
{
private:
	int day, month, year;
	bool isValid(int, int) const;	//gives a true or false value for the limits on our dates. 
public:
	Date(int, int, int);	//constructor
	std::string getDate()const;	//Basic get date format
	std::string getFormal()const;	//returns formal date
	std::string getEuro()const;	//returns the eur0 date

	//All defined parameters are found in date.cpp
};
#endif // !DATE_H
