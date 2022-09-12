/*Write a program that asks the user for the name of a file.The program should display the
contents of the file on the screen.If the file’s contents won’t fit on a single screen, the program
should display 24 lines of output at a time, and then pause.Each time the program
pauses, it should wait for the user to strike a key before the next 24 lines are displayed.*/

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	string filename, line;
	

	fstream fin;

	cout << "Enter the name of the file you wish to open: ";
	cin >> filename;

	fin.open(filename, ios::in);
	int count = 0;

	while (getline(fin, line))
	{
		cout << line << endl;

		count++;
		if (count % 24 == 0)
		{
			cout << "\nPress enter key to continue.\n";
			cin.get();
			cin.ignore();
		}
	}
	fin.close();
	system("pause");
	return 0;

}
