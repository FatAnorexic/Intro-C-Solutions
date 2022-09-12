/*File encryption is the science of writing the contents of a file in a secret code. Your
encryption program should work like a filter, reading the contents of one file, modifying
the data into a code, and then writing the coded contents out to a second file. The
second file will be a version of the first file, but written in a secret code.
Although there are complex encryption techniques, you should come up with a
simple one of your own. For example, you could read the first file one character at
a time, and add 10 to the ASCII code of each character before it is written to the
second file.*/
/*
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char ch;
	fstream fin("formated.txt", ios::in);

	if (!fin)
	{
		cout << "Error opening the file.";
		system("pause");
		return 0;
	}

	fstream fout("encrypted.dat", ios::out | ios::binary);

	while (!fin.fail())
	{
		fin.get(ch);
		ch += 10;
		fout << ch;
	}
	fin.close();
	fout.close();
	system("pause");

	return 0;
}
*/