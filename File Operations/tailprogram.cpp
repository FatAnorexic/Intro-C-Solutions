/*Write a program that asks the user for the name of a file. The program should display
the last 10 lines of the file on the screen (the “tail” of the file). If the file has fewer than
10 lines, the entire file should be displayed, with a message indicating the entire file
has been displayed.*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void read(const string&);
void displayTail(fstream&);

int main()
{
	string fileName;
	cout << "Enter a filename: ";
	cin >> fileName;
	read(fileName);
	cout << endl;
	system("pause");
	return 0;
}

void read(const string& filename)
{
	fstream fin;
	fin.open(filename, ios::in);
	displayTail(fin);
	fin.close();
}

void displayTail(fstream& fin)
{
	fin.seekg(0L, ios::beg);
	long pos = fin.tellg();
	char ch;
	fin.seekg(0L, ios::end);
	fin.clear();
	int count = 0;
	while (count < 10 && pos != fin.tellg())
	{
		fin.seekg(-1L, ios::cur);
		if (fin.peek() == '\n')
		{
			count++;
		}
	}
	if (count < 9)
	{
		cout << "There are less than 10 lines inside the file\n";
		cout << "Displaying entire file\n";
	}
	while (!fin.eof())
	{
		fin.get(ch);
		cout << ch;
	}
}
