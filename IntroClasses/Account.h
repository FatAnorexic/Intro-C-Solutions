//Class declaration

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
	/*Private members will include balance, interest rate, and interest, and transactions*/
private:
	double balance;
	double interestRate;
	double interest;
	int transactions;
public:
	//Create a constructor to initialize the private members

	Account(double iRate = 0.045, double bal = 0)
	{
		balance = bal;
		interestRate = iRate;
		interest = 0;
		transactions = 0;
	}
	//create functions to mutate the given variables. Anytime a transaction occurs
	//transaction should be increased(withdrawl or deposit)

	void setInterestRate(double iRate) { interestRate = iRate; }

	void makeDeposit(double amount) { balance += amount; transactions++; }

	bool withdraw(double amount);	//defined in account.cpp

	void calcInterest()
	{
		interest = balance * interestRate; balance += interest;
	}

	//Create the accessor functions

	double getInterestRate() const { return interestRate; }

	double getBalance() const { return balance; }

	double getInterest() const { return interest; }

	double getTransactions() const { return transactions; }
};
#endif // !ACCOUNT_H
