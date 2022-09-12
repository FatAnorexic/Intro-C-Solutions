/*Write a program that reads and prints a joke and its punch line from two different files.
The first file contains a joke, but not its punch line. The second file has the punch line as
its last line, preceded by “garbage.” The main function of your program should open the
two files and then call two functions, passing each one the file it needs. The first function
should read and display each line in the file it is passed (the joke file). The second function
should display only the last line of the file it is passed (the punch line file). It should find
this line by seeking to the end of the file and then backing up to the beginning of the last
line. Data to test your program can be found in the joke.txt and punchline.txt files*/
/*
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void joke(fstream&);
void punchLine(fstream&);

int main()
{
	fstream jokes("joke.txt", ios::in);
	fstream punch("punchline.txt", ios::in);
	joke(jokes);

	system("pause");

	punchLine(punch);

	system("pause");
	return 0;
}

void joke(fstream& jokes)
{
	string line;
	while (getline(jokes, line))
	{
		cout << line << endl;
	}
	jokes.close();
}
void punchLine(fstream& punch)
{
	char ch;
	punch.seekg(-1L, ios::end);
	punch.get(ch);

	while (ch != '\n')
	{
		punch.seekg(-2L, ios::cur);
		punch.get(ch);
	}
	punch.get(ch);
	while (!punch.eof())
	{
		cout << ch;
		punch.get(ch);
	}
	cout << endl;
	punch.close();
}
*/