/*Write a program that decrypts the file produced by the program in Programming
Challenge 9. The decryption program should read the contents of the coded file, restore
the data to its original state, and write it to another file.*/
/*
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char ch;

	fstream fin("encrypted.dat", ios::in | ios::binary);
	if (!fin)
	{
		cout << "Error: file not found.";
		system("pause");
		return 0;
	}

	fstream fout("decrypt.txt", ios::out);

	while (!fin.fail())
	{
		fin.get(ch);
		ch -= 10;
		fout << ch;
	}
	fin.close();
	fout.close();
	system("pause");

	return 0;
}
*/