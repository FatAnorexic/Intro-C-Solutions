#include <iostream>
#include "date.h"


int main(){
	int day, month, year;
	
	printf("Enter the day, the month, then the year as dd/mm/yyyy: ");
	std::cin >> day >> month >> year;

	Date date(day, month, year);

	
	std::cout<<"The date is: "<< date.getDate()<<'\n';
	std::cout<<"The formal date is: "<< date.getFormal()<<'\n';
	std::cout<<"The euro date is: "<< date.getEuro()<<'\n';
	
	system("pause");
	return 0;
}
