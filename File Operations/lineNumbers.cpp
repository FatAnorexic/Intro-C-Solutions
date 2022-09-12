/*(This assignment could be done as a modification of the program in Programming
Challenge 2.) Write a program that asks the user for the name of a file. The program
should display the contents of the file on the screen. Each line of screen output should
be preceded with a line number, followed by a colon. The line numbering should start
at 1. Here is an example:
1:George Rolland
2:127 Academy Street
3:Brasstown, NC 28706
If the file’s contents won’t fit on a single screen, the program should display 24 lines of
output at a time, and then pause. Each time the program pauses, it should wait for the
user to strike a key before the next 24 lines are displayed.*/
/*
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string filename, line;
	int count = 1, linenum=0;
	cout << "Enter the filename: ";
	cin >> filename;

	fstream fin(filename, ios::in);
	cout << count << ":";
	while (getline(fin, line))
	{
		cout << line << endl;
		count++;
		linenum++;
		if (count == 4)
		{
			count = 1;
			cout << "\n";
		}

		if (linenum % 24 == 0)
		{
			cin.ignore();
			cout << "\nPress the enter key to continue.";
			cin.get();
			
		}

		cout << count << ":";
	}
	fin.close();
	system("pause");
	return 0;
}
*/