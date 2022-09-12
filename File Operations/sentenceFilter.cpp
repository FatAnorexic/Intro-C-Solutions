/*Write a program that asks the user for two file names. The first file will be opened for
input and the second file will be opened for output. (It will be assumed that the first file
contains sentences that end with a period.) The program will read the contents of the first
file and change all the letters to lowercase except the first letter of each sentence, which
should be made uppercase. The revised contents should be stored in the second file.*/
/*
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string input, output, line;

	cout << "Enter the file name: ";
	cin >> input;

	fstream fin(input, ios::in);

	cout << "\nEnter the file name for output: ";
	cin.ignore();
	cin >> output;
	cout << endl;

	fstream fout(output, ios::out);

	fin.clear();
	fin.seekg(0, ios::beg);
	fout.seekp(0, ios::beg);

	if (!fin.fail())
	{
		getline(fin, line);
		for (int i = 0; i < line.length(); i++)
		{
			if (isalpha(line[0]))
				line[0] = toupper(line[0]);
			if (isspace(line[0]))
				line[1] = toupper(line[1]);
			if (line[i] == '.')
			{
				if (isalpha(line[i+1]))
					line[i+1] = toupper(line[i+1]);
				if (isspace(line[i + 1]))
				{
					line[i + 2] = toupper(line[i + 2]);
					i += 2;
				}
			}
			
		}
		cout << line;
		fout << line;
	}
	cout << endl;
	fin.close();
	fout.close();
	system("pause");

	return 0;
}
*/