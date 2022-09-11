

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