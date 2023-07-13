#include <iostream>
#include <cstdlib>
#include "population.h"

Population::Population(long p, long b, long d){
	if (p >= 1 && b >= 0 && d >= 0){
		population = p;
		births = b;
		deaths = d;
	}else{
		printf("Error: cannot have a population<1 or births/deaths <0.\n");
		exit(EXIT_FAILURE);
	}
}

void Population::setPopulation(long p){
	if (p >= 1)
		population = p;
	else{
		printf("\nError: Cannot have a population < 1.\n");
		exit(EXIT_FAILURE);
	}
}

void Population::setBirths(long b)
{
	if (b >= 0)
		births = b;
	else{
		printf("\nError: Cannot have births < 0.\n");
		exit(EXIT_FAILURE);
	}
}

void Population::setDeaths(long d)
{
	if (d >= 0)
		deaths = d;
	else{
		printf("\nError: Cannot have less than 0 deaths.\n");
		exit(EXIT_FAILURE);
	}
}

double Population::getRatio() const{
	double ratio = 0.0;

	if (deaths != 0 || births != 0)
		ratio = births / deaths;
	
	return ratio;
}
