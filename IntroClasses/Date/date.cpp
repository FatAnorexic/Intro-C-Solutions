

#include <iostream>
#include <cstdlib>
#include <string>
#include "date.h"
using namespace std;

Date::Date(int d, int m, int y)
{
	bool status;
	day = d;
	month = m;
	year = y;

	status=isValid(d, m);

	if (!status)	//if the month or day are invalid the program will fail and abort
	{
		cout << "Error: Invalid Input.\n";
		exit(EXIT_FAILURE);
	}
}

bool Date::isValid(int d, int m) const
{
	if (d > 0 || d <= 31 && m>0 || m <= 12)
		return true;
	else
		return false;
}

string Date::getDate() const
{
	string date;

	//Using the to string functions we can convert ints to strings and combine them to return a single value.

	date = to_string(month) + "/" + to_string(day) + "/" + to_string(year);
	return date;
}

string Date::getFormal()const
{
	const int num = 12;
	//a list to choose from for both formal and euro
	string mo[num] = { "January", "Febuary", "March", "April","May", "June",
						"July", "August", "September","October", "November",
						"December" };	
	string date; 

	//The month-1 is due to the fact that arrays count 0,1,2..,n-1.

	date = mo[month-1] + " " + to_string(day) + " " + to_string(year);
	return date;

}

string Date::getEuro() const
{
	const int num = 12;
	string mo[num] = { "January", "Febuary", "March", "April","May", "June",
						"July", "August", "September","October", "November",
						"December" };
	string date;
	date = to_string(day) + " " + mo[month-1] + " " + to_string(year);
	return date;
}