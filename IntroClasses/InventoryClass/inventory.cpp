
#include <cstdlib>
#include "inventory.h"
using namespace std;

Inventory::Inventory(int i, int q, double c)
{
	itemNumber = i;
	quantity = q;
	cost = c;

	if (i < 0 || q < 0 || c < 0)
	{
		exit(EXIT_FAILURE);
	}
	else
		setTotalCost(q, c);
}

void Inventory::setItem(int i)
{
	if (i < 0)
		exit(EXIT_FAILURE);
	else
		itemNumber = i;
}

void Inventory::setQuantity(int q)
{
	if (q < 0)
		exit(EXIT_FAILURE);
	else
		quantity = q;
}

void Inventory::setCost(double c)
{
	if (c < 0.0)
		exit(EXIT_FAILURE);
	else
		cost = c;
}
