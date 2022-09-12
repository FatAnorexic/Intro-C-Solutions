/*Write a function named arrayToFile . The function should accept three arguments:
the name of a file, a pointer to an int array, and the size of the array. The function
should open the specified file in binary mode, write the contents of the array to the file,
and then close the file.
Write another function named fileToArray . This function should accept three arguments:
the name of a file, a pointer to an int array, and the size of the array. The
function should open the specified file in binary mode, read its contents into the array,
and then close the file.
Write a complete program that demonstrates these functions by using the arrayToFile
function to write an array to a file, and then using the fileToArray function to read
the data from the same file. After the data are read from the file into the array, display
the array’s contents on the screen.*/

#include <iostream>
#include <fstream>

using namespace std;

void arrayToFile(fstream&, int*, const int);
void fileToArray(fstream&, int*, const int);
void displayArray(int*, const int);

int main()
{
	const int size = 10;
	int arrayout[size] = { 1,2,3,4,5,6,7,8,9,10 }, arrayin[size] = { 0,0,0,0,0,0,0,0,0,0 };

	fstream file;
	
	arrayToFile(file, arrayout, size);

	fileToArray(file , arrayin, size);
	system("pause");
	return 0;
}

void arrayToFile(fstream& file, int* arrout, const int size)
{
	file.open("array.dat", ios::out | ios::binary);
	if (!file.fail())
	{
		cout << "\nWriting information to the file:\n";
		file.write(reinterpret_cast<char*>(arrout), sizeof(*arrout)*size);
		cout << "Done\n\n";
	}
	else
	{
		cout << "Error writing to the file.";
	}
	
	file.close();
}

void fileToArray(fstream& file, int* arrin, const int size)
{
	file.open("array.dat", ios::in | ios::binary);
	if (!file.fail())
	{
		file.read(reinterpret_cast<char*>(arrin), sizeof(*arrin)*size);
	}
	else
	{
		cout << "error, cannot return file.";
	}
	
	file.close();

	displayArray(arrin, size);
}

void displayArray(int* arrin, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arrin+i) << " ";
	}
}
