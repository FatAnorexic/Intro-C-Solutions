/*
#include <iostream>
#include <iomanip>
#include "sale.h"
using namespace std;

int main()
{
	const double TAX = 0.06;
	double cost;

	cout << "Enter the cost of the item: ";
	cin >> cost;

	Sale item(cost, TAX);
	cout << showpoint << fixed << setprecision(2);

	cout << "The amount of sales tax is $" << item.getTax() << endl;
	cout << "The total cost is $" << item.getTotal() << endl;

	system("pause");
	return 0;
}
*/