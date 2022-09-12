/*Write a program that uses a structure to store the following data on a company division:
Division Name (such as East, West, North, or South)
Quarter (1, 2, 3, or 4)
Quarterly Sales
The user should be asked for the four quarters’ sales figures for the East, West, North,
and South divisions. The data for each quarter for each division should be written to
a file.
Input Validation: Do not accept negative numbers for any sales figures*/
/*
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int DIV = 4;

struct Data
{
	string divi[DIV];
	double qtr[DIV] = { 0.0,0.0,0.0,0.0 };
	double qtrly = 0;
};



int main()
{
	Data sales;

	fstream fout("corpo.dat", ios::out | ios::binary);

	if (!fout)
	{
		cout << "Error: File cannot be opened.";
		system("pause");
		return 0;
	}

	cout << "Enter the sales and name of your division:\n";
	for (int i = 0; i < DIV; i++)
	{
		cout << "Enter the name of the division: ";
		getline(cin, sales.divi[i]);
		for (int j = 0; j < DIV; j++)
		{
			do
			{
				cout << "Quarter " << (j + 1) << ": ";
				cin >> sales.qtrly;
				if (sales.qtrly < 0)
					cout << "Sales must be greater than $0\n";
				
			} while (sales.qtrly < 0);
			sales.qtr[j] = sales.qtrly;
			cin.ignore();
		}
		fout.write(reinterpret_cast<char*>(&sales), sizeof(sales));
	}
	fout.close();
	system("pause");

	return 0;
}
*/