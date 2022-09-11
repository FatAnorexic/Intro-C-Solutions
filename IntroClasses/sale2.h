/*Like other functions, constructors may have default arguments as well*/

#ifndef SALE2_H
#define SALE2_H

class Sale2
{
private:
	double itemCost, taxRate;
public:
	Sale2(double cost, double rate = 0.05)
	{
		itemCost = cost;
		taxRate = rate;
	}

	double getItemCost() const { return itemCost; }
	double getTaxRate() const { return taxRate; }
	double getTax() const { return(itemCost * taxRate); }
	double getTotal() const { return(itemCost + getTax()); }

};
#endif // !SALE2_H
