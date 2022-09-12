/*Write a program that asks the user for a file name and a string to search for. The
program should search the file for every occurrence of a specified string. When the
string is found, the line that contains it should be displayed. After all the occurrences
have been located, the program should report the number of times the string appeared
in the file.*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string filename, line, search;
	int count = 0;

	cout << "Enter the name of the file: ";
	cin >> filename;
	cout << "Enter the line or phrase you wish to search for: ";
	cin >> search;

	fstream fin(filename, ios::in);

	if (!fin)
	{
		cout << "Error opening the file.\n";
		system("pause");
		return 0;
	}

	fin.seekg(0L, ios::beg);
	while (!fin.fail())
	{
		getline(fin, line);

		if (line.find(search, 0) < line.length())
		{
			cout << line << endl;
			count++;
		}
	}

	fin.close();
	cout << "\nThe phrase appeared " << count << " times.\n\n";
	system("pause");
	return 0;
}
