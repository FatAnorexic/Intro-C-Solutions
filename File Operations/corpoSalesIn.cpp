/*Write a program that reads the data in the file created by the program in Programming
Challenge 11. The program should calculate and display the following figures:
• Total corporate sales for each quarter
• Total yearly sales for each division
• Total yearly corporate sales
• Average quarterly sales for the divisions
• The highest and lowest quarters for the corporation*/
/*
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

const int DIV = 4;

struct Data
{
	string divi[DIV];
	double qtr[DIV] = { 0,0,0,0 };
	double qtrly = 0;
};

void getData(fstream&, Data);
void displayData(double[],double[], double, double, double, string[]);


int main()
{
	Data sales;

	fstream fin("corpo.dat", ios::in | ios::binary);

	getData(fin, sales);

	fin.close();

	return 0;
}

void getData(fstream& fin, Data sales)
{
	double totalqtr[DIV] = { 0,0,0,0 }, totYrDiv[DIV] = { 0,0,0,0 }, totalYr = 0, high, low;
	string Division[DIV];

	cout << "\nCorporate Sales Report\n";
	cout << "----------------------------\n";
	cout << "\nTotal sales by Division: ";
	for (int i = 0; i < DIV; i++)
	{
		fin.read(reinterpret_cast<char*>(&sales), sizeof(sales));
		Division[i] = sales.divi[i];
		for (int j = 0; j < DIV; j++)
		{
			totYrDiv[j] += sales.qtr[j];
			totalqtr[j] += sales.qtr[j];
		}
		totalYr += totYrDiv[i];
	}

	high = low = totalqtr[0];
	for (int i = 0; i < DIV; i++)
	{
		if (high < totalqtr[i])
			high = totalqtr[i];
		if (low > totalqtr[i])
			low = totalqtr[i];
	}

	displayData(totalqtr, totYrDiv, totalYr, high, low, Division);
}

void displayData(double totq[], double totyrD[], double totyr, double high, double low, string div[])
{
	cout << showpoint << fixed << setprecision(2);
	for (int i = 0; i < DIV; i++)
	{
		cout << div[i] << ": " << totq[i] << endl;
		cout << "Total division sales: ";
		cout << totyrD[i] << endl << endl;
	}
	cout << "\nAverage quarterly sales: " << totyr / 4 << endl;
	cout << "\n Total Corporate sales: " << totyr << endl;
	cout << "\nHighest sales quarter: " << high << endl;
	cout << "\nLowest sales quarter: " << low << endl;
}
*/