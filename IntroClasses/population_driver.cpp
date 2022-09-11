/*

#include <iostream>
#include "population.h"
using namespace std;

int main()
{
	long population, births, deaths;

	cout << "Enter the population for the area: ";
	cin >> population;
	cin.ignore();
	cout << "Enter the births in your given area: ";
	cin >> births;
	cin.ignore();
	cout << "Enter the deaths in that same area: ";
	cin >> deaths;

	Population area(population, births, deaths);

	cout << "The birth rate is: " << area.getBirthRate() << endl;
	cout << "The death rate: " << area.getDeathRate() << endl;

	cout << "The ratio stuff:\n\n"; area.getRatio(); cout<<endl;

	return 0;
}
*/