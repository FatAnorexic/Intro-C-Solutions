//Implementation file for the die class

#include <cstdlib>
#include <ctime>
#include "die.h"
using namespace std;

//Constructor accepts the argument for the number of sides, and executes the roll method.
Die::Die(int numSides)
{
	unsigned seed = time(0);
	srand(seed);

	sides = numSides;
	//perform roll
	roll();
}

//the roll method simulates the rolling of the die
void Die::roll()
{
	const int MIN_VAL = 1;	//min die value

	value = (rand() % (sides - MIN_VAL + 1)) + MIN_VAL;
}

//Accessors return the value and sides of the die

int Die::getSides() { return sides; }
int Die::getValue() { return value; }