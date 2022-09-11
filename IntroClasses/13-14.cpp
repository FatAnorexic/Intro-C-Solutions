//Creating an array of objects
/*
#include <iostream>
#include <iomanip>
#include "InventoryItem.h"
using namespace std;

int main()
{
	const int NUM = 5;
	InventoryItem item[NUM] = { InventoryItem("hammer", 6.95, 12),
								InventoryItem("wrench", 7.86, 15),
								InventoryItem("Screw Driver", 5.00, 25),
								InventoryItem("Nails", 0.05, 150),
								InventoryItem("Vacuum", 186.00, 7) };

	cout << setw(14) << "Inventory Item"
		<< setw(8) << "cost" << setw(8)
		<< setw(16) << "Units on Hand\n";
	cout << "----------------------------------\n";
	for (int i = 0; i < NUM; i++)
	{
		cout << setw(14) << item[i].getDescription();
		cout << setw(8) << item[i].getCost();
		cout << setw(7) << item[i].getUnits() << endl;
	}
}
*/