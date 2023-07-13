#ifndef POPULATION_H
#define POPULATION_H

class Population
{
private:
	long population;
	long births;
	long deaths;
public:
	Population(long p, long b, long d);	//constructor-args found in population.cpp

	//mutators can definitions can also be found in population.cpp
	void setPopulation(long p);
	void setBirths(long b);
	void setDeaths(long d);

	double getBirthRate() const { return births / population; }
	double getDeathRate() const { return deaths / population; }
	double getRatio() const;//found population.cpp
};
#endif // !POPULATION_H
