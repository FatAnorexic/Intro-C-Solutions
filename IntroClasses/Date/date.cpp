#include <iostream>
#include <cstdlib>
#include "date.h"

Date::Date(int d, int m, int y){
	bool status;
	day = d, month = m, year = y;

	status=isValid(d, m);

	if (!status){	//if the month or day are invalid the program will fail and abort
		printf("Error: Invalid Input.\n");
		exit(EXIT_FAILURE);
	}
}

bool Date::isValid(int d, int m) const{
	if (d > 0 || d <= 31 && m>0 || m <= 12)
		return true;
	return false;
}

std::string Date::getDate() const{
	std::string date;

	//Using the to std::string functions we can convert ints to std::strings and 
	//combine them to return a single value.

	date = std::to_string(month) + "/" + std::to_string(day) + "/" + std::to_string(year);
	return date;
}

std::string Date::getFormal()const{
	const int num = 12;
	//a list to choose from for both formal and euro
	std::string mo[num] = { 
		"January", "Febuary", "March", "April","May", "June",
		"July", "August", "September","October", "November",
		"December" 
		};	
	
	std::string date; 

	//The month-1 is due to the fact that arrays count 0,1,2..,n-1.

	date = mo[month-1] + " " + std::to_string(day) + " " + std::to_string(year);
	return date;

}

std::string Date::getEuro() const{
	const int num = 12;
	std::string mo[num] = { 
		"January", "Febuary", "March", "April","May", "June",
		"July", "August", "September","October", "November",				
		"December" 
		};
	
	std::string date;
	
	date = std::to_string(day) + " " + mo[month-1] + " " + std::to_string(year);
	return date;
}