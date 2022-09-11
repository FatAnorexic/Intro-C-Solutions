/*
#include <iostream>
#include <cctype>
#include <iomanip>
#include "Account.h"
using namespace std;

void displayMenu();
void makeDeposit(Account&);
void withdraw(Account&);

int main()
{
	Account savings;	//Account type
	char choice;	//for menu

	cout << fixed << setprecision(2) << showpoint;

	do
	{
		//Call the display menu function
		displayMenu();
		cin >> choice;
		while (toupper(choice) < 'A' || toupper(choice) > 'G')
		{
			cout << "Please make a choice in the range of A to G: ";
			cin >> choice;
		}

		//process the user selection with a switch call
		switch (choice)
		{
		case 'a':
		case 'A': cout << "The current balance is $";
				cout << savings.getBalance() << endl;
				break;
		case 'b':
		case 'B': cout << "There have been "
				<< savings.getTransactions() << " transactions.\n";
				break;
		case 'c':
		case 'C': cout << "Interest earned for this period: $"
			<< savings.getInterest() << endl;
			break;
		case 'd':
		case 'D':makeDeposit(savings);
			break;
		case 'e':
		case 'E': withdraw(savings);
			break;
		case 'f':
		case 'F': savings.calcInterest();
			cout << "Interest added.\n";
		}

	} while (toupper(choice) != 'G');

	system("pause");
	return 0;
}

//Display menu fuction will simply display the users choices, and return to the do while loop in main
void displayMenu()
{
	cout << "\n\t\tMenu\n";
	cout << "----------------------------------\n";
	cout << "A)Display Account balance\n"
		<< "B)Display the number of tranactions this period\n"
		<< "C)Display the interest rate for this period\n"
		<< "D)Make a deposit\n"
		<< "E)Make a withdrawal\n"
		<< "F)Add interest for this period\n"
		<< "G)Exit the program\n\n"
		<< "Enter your choice: ";
}
*/
/********************************************************************************
Definition of makeDeposit. this function accepts a referecne to an account		*
object. The user is promted for the dollar amount of the depost, and the		*
makeDeposit member of the account object is then called.						*
*********************************************************************************/
/*
void makeDeposit(Account& acnt)
{
	double dollars;

	cout << "Enter the dollar amount to deposit: ";
	cin >> dollars;

	cin.ignore();
	acnt.makeDeposit(dollars);
}
*/
/********************************************************************************
Definition of the function withdaw. This function accepts a reference to an		*
Account object. The user is prompted for the dollar amount to withdraw, and the	*
withdraw memeber of the Account object is called.								*
*********************************************************************************/
/*
void withdraw(Account& acnt)
{
	double dollars;

	cout << "Enter the amount to withdraw: ";
	cin >> dollars;
	cin.ignore();
	if (!acnt.withdraw(dollars))
		cout << "Error: Withdrawal amount too large.\n\n";
}
*/