/*Write a program that uses a structure to store the following inventory data in a file:
Item Description
Quantity on Hand
Wholesale Cost
Retail Cost
Date Added to Inventory
The program should have a menu that allows the user to perform the following tasks:
• Add new records to the file.
• Display any record in the file.
• Change any record in the file.
Input Validation: The program should not accept quantities, or wholesale or retail
costs, less than 0. The program should not accept dates that the programmer determines
are unreasonable.*/

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <iomanip>
using namespace std;

struct Inventory
{
	string description;
	int quatity = 0;
	double wholesale = 0, retail = 0;
	string date;
};

int addNew(Inventory&, fstream&);
int display(Inventory&, fstream&);
int change(Inventory&, fstream&);

int main()
{
	int choice; Inventory record;

	
	fstream file("inven.dat", ios::in | ios::out | ios::binary);

	if (!file)
	{
		cout << "Error:cannot open file.";
		return 0;
	}

	cout << "\t\tInventory\n";
	cout << "-----------------------------------------------\n";
	cout << "Choose one of the 3 options:\n"
		<< "(1)Add New Record\n"
		<< "(2)Display Record\n"
		<< "(3)Change Record\n"
		<< "(4)Quit\n";
	cout << "Enter the number of your choice: ";
	cin >> choice;

	switch (choice)
	{
	case 1:
		addNew(record, file);
		break;
	case 2:
		display(record, file);
		break;
	case 3:
		change(record, file);
		break;
	case 4:
		break;
	}
	file.close();
	cout << endl << endl;
	return 0;
}

int addNew(Inventory& item, fstream& file)
{
	int month, day, year, conv, expired=86400*365*3; //used to determine if the date is acceptable or not.
	int ct = time(NULL);	//Used to get current time from computer from 1970 until launch.
	
	cout << "\n\t\tAdd New Item\n"
		<< "-------------------------------------------\n";
	file.seekp(0L, ios::end);
	cin.ignore();

	cout << "Item: "; getline(cin, item.description);
	do
	{
		cout << "Quantity: "; cin >> item.quatity;
		cout << "Wholesale Price: "; cin >> item.wholesale;
		cout << "Retail Price: "; cin >> item.retail;

		if (item.quatity < 0 || item.wholesale < 0 || item.retail < 0)
			cout << "\nError! Cannot have quantity, wholesale, or retail be less than zero.\n\n";	//descriptor for user in event of negative values.

	} while (item.quatity < 0 || item.wholesale < 0 || item.retail < 0);

	cout << "\n\t\tDate of Aquisition:\n";
	do
	{
		cout << "Month(mm): "; cin >> month;
		cout << "Day(dd): "; cin >> day;
		cout << "Year(yyy): "; cin >> year;
		conv = (year - 1970) * 86400 * 365;		//converts the year seconds for comparison to ct=time(NULL).
		if ((ct - conv) > expired)
		{
			cout << "\nError: Too old for record.\n\n";
		}

		//This will convert the accepted date to a string for our date.

		else
		{
			string mo = to_string(month), d = to_string(day), yr = to_string(year);
			item.date = (mo + "/" + d + "/" + yr);
		}
	} while ((ct - conv) > expired);

	cout << "\n\nNow writing data to file...\n";
	//write the data aquired to the file.
	file.write(reinterpret_cast<char*>(&item), sizeof(item));

	cout << "done.\n";
	return main();
}

int display(Inventory& record, fstream& file)
{

	cout << "\n\t\tRecord Display\n"
		<< "-------------------------------------\n";
	int num = 0;
	file.seekg(0L, ios::beg);
	
	file.read(reinterpret_cast<char*>(&record), sizeof(record)); //read from file.
	
	while (!file.eof())
	{
		cout << "Record #:" << num << "\n-------------------------\n";
		
		cout << "\nDescription: " << record.description << endl << "Quantity: " << record.quatity << endl
			<< "Wholesale Price $" << record.wholesale << endl << "Retail Price $" << record.retail << endl
			<< "Date Added: " << record.date << endl;
		cout << endl;
		num++;
		file.read(reinterpret_cast<char*>(&record), sizeof(record));
	}
	cin.ignore();
	cout << endl << endl;
	return main();
}

int change(Inventory& record, fstream& file)
{
	cout << "\n\n\t\tChange Existing Item\n------------------------------------------------------\n";
	
	long recnum;
	
	int month, day, year, conv, expired = 86400 * 365 * 3;
	int ct = time(NULL);

	cout << "Enter the record number you wish to edit: ";
	cin >> recnum;
	cout << endl << endl;

	file.seekg(recnum * sizeof(record), ios::beg);
	file.read(reinterpret_cast<char*>(&record), sizeof(record));

	cout << "Description: " << record.description << endl << "Quantity: " << record.quatity << endl
		<< "Wholesale: " << record.wholesale << endl << "Retail: " << record.retail << endl
		<< "Date: " << record.date << endl << endl;

	cout << "Enter the new data:\n-----------------------------------\n";
	cin.ignore();
	cout << "Item: "; getline(cin, record.description);

	do
	{
		cout << "Quantity: "; cin >> record.quatity;
		cout << "Wholesale: "; cin >> record.wholesale;
		cout << "Retail: "; cin >> record.retail;

		if (record.quatity < 0 || record.wholesale < 0 || record.retail < 0)
			cout << "\nError: cannot have quantity, wholesale, or retail be less than 0.\n\n";

	} while (record.quatity < 0 || record.wholesale < 0 || record.retail < 0);

	do
	{
		cout << "Month(mm): "; cin >> month;
		cout << "Day(dd): "; cin >> day;
		cout << "Year(yyyy): "; cin >> year;
		conv = (year - 1970) * 86400 * 365;
		if ((ct - conv) > expired)
			cout << "\nError: the item has been stocked too long for record.\n\n";
		else
		{
			string mo = to_string(month), d = to_string(day), yr = to_string(year);
			record.date.clear();
			record.date = (mo + "/" + d + "/" + yr);
		}

	} while ((ct - conv) > expired);

	//write the new data to the file.
	cout << "\nappending new data...\n";

	file.seekp(recnum * sizeof(record), ios::beg);
	file.write(reinterpret_cast<char*>(&record), sizeof(record));
	
	cout << "done.\n\n";
	cin.ignore();
	return main();
}
