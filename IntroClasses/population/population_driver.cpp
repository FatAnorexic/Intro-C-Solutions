#include <iostream>
#include "population.h"

int main()
{
	long population, births, deaths;

	printf("Enter the population for the area: ");
	std::cin >> population;
	std::cin.ignore();
	printf("Enter the births in your given area: ");
	std::cin >> births;
	std::cin.ignore();
	printf("Enter the deaths in that same area: ");
	std::cin >> deaths;

	Population area(population, births, deaths);
	double ratio=area.getRatio();

	std::cout << "The birth rate is: " << area.getBirthRate() << '\n';
	std::cout << "The death rate: " << area.getDeathRate() << '\n';
	std::cout << "The ratio stuff:\n"; 
	
	if (ratio > 1.0){
		 printf("\nThe population is growing by a ratio of: %f\n", ratio);
	}else if (ratio < 1.0)
		printf("\nThe population is in decline by a ratio of: %f\n", ratio);
	
	else if(ratio == 1.0)
		printf("\nThe population stayed roughly the same: %f\n", ratio); 
	std::cout<<'\n';

	system("pause");
	return 0;
}
