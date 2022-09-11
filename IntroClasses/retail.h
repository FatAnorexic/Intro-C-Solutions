

#ifndef RETAIL_H
#define RETAIL_H
#include <string>
using namespace std;

class RetailItem
{
private:
	string description;
	int units;
	double price;
public:
	RetailItem()
	{
		description = "";
		units = 0;
		price = 0.0;
	}
	RetailItem(string d)
	{
		description = d;
		units = 0;
		price = 0.0;
	}
	RetailItem(string d, int u)
	{
		description = d;
		units = u;
		price = 0.0;
	}
	RetailItem(string d, int u, double p)
	{
		description = d;
		units = u;
		price = p;
	}

	void setDesc(string d) { description = d; }
	void setUnits(int u) { units = u; }
	void setPrice(double p) { price = p; }

	string getDesc() { return description; }
	int getUnits() { return units; }
	double getPrice() { return price; }
};
#endif // !RETAIL_H
