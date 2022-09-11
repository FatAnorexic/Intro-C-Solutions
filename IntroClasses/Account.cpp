//implamentation for the account class and the withdraw function

#include "Account.h"

bool Account::withdraw(double amount)
{
	if (balance < amount)
		return false;	//not enough in the account
	else
	{
		balance -= amount;
		transactions++;
		return true;
	}
}