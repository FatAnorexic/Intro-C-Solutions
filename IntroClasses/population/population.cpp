

#include <iostream>
#include <cstdlib>
#include "population.h"
using namespace std;

Population::Population(long p, long b, long d)
{
	if (p >= 1 && b >= 0 && d >= 0)
	{
		population = p;
		births = b;
		deaths = d;
	}
	else
	{
		cout << "Error: cannot have a population<1 or births/deaths <0.\n";
		exit(EXIT_FAILURE);
	}
}

void Population::setPopulation(long p)
{
	if (p >= 1)
		population = p;
	else
	{
		cout << "\nError: Cannot have a population < 1.\n";
		exit(EXIT_FAILURE);
	}
}

void Population::setBirths(long b)
{
	if (b >= 0)
		births = b;
	else
	{
		cout << "\nError: Cannot have births < 0.\n";
		exit(EXIT_FAILURE);
	}
}

void Population::setDeaths(long d)
{
	if (d >= 0)
		deaths = d;
	else
	{
		cout << "\nError: Cannot have less than 0 deaths.\n";
		exit(EXIT_FAILURE);
	}
}

void Population::getRatio() const
{
	double ratio = 0.0;

	if (deaths != 0 || births != 0)
		ratio = births / deaths;
	if (ratio > 1.0)
	{
		cout << "\nThe population is growing by a ratio of: " << ratio << endl;
	}
	else if (ratio < 1.0)
		cout << "\nThe population is in decline by a ratio of: " << ratio << endl;
	else if (ratio == 1.0)
		cout << "\nThe population stayed roughly the same: " << ratio << endl;
}
