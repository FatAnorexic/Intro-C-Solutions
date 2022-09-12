/*

#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
	string filename;
	char ch;

	fstream fin;

	cout << "enter a file name: ";
	cin >> filename;

	fin.open(filename, ios::in);

	if (!fin)
		cout << "Error opening the file";

	else
	{
		int count = 0;

		while ((ch = fin.get()) != EOF && count <= 10)
		{
			if (ch == '\n')
				count++;

			cout << ch;

		}


		if (count < 10)
		{
			cout << "\nThe entire file has been displayed.";
		}
	}
	system("pause");
	return 0;

}
*/