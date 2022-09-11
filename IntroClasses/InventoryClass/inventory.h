/*Design an Inventory class that can hold information and calculate data for items in a
retail store’s inventory. The class should have the following private member variables:
Variable Name Description
itemNumber An int that holds the item’s item number.
quantity An int for holding the quantity of the items on hand.
cost A double for holding the wholesale per-unit cost of the item
totalCost A double for holding the total inventory cost of the item (calculated
as quantity times cost ).*/

/*The class should have the following public member functions:
Member Function Description
Default Constructor Sets all the member variables to 0.
Constructor #2 Accepts an item’s number, cost, and quantity as arguments.
The function should copy these values to the appropriate
member variables and then call the setTotalCost function.
setItemNumber Accepts an integer argument that is copied to the
itemNumber member variable.
setQuantity Accepts an integer argument that is copied to the quantity
member variable.
setCost Accepts a double argument that is copied to the cost
member variable.
setTotalCost Calculates the total inventory cost for the item ( quantity
times cost ) and stores the result in totalCost .
getItemNumber Returns the value in itemNumber .
getQuantity Returns the value in quantity .
getCost Returns the value in cost .
getTotalCost Returns the value in totalCost .
Demonstrate the class in a driver program.
Input Validation: Do not accept negative values for item number, quantity, or cost.*/

#ifndef INVENTORY_H
#define INVENTORY_H

class Inventory
{
private:
	int itemNumber;
	int quantity;
	double cost;
	double totalCost;
public:
	Inventory()
	{
		itemNumber = 0;
		quantity = 0;
		cost = 0.0;
		setTotalCost(quantity, cost);
	}
	Inventory(int i, int q, double c); //constructor#2 found in inventory.cpp
	//all mutators, except setTotal, can be found in inventory.cpp
	void setTotalCost(int q, double c) { totalCost = q * c; }
	void setItem(int i);
	void setCost(double c);
	void setQuantity(int q);

	int getItem() const { return itemNumber; }
	int getQuantity() const { return quantity; }
	double getCost() const { return cost; }
	double getTotalCost() const { return totalCost; }

};

#endif
