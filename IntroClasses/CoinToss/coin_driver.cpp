

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "CoinToss.h"
using namespace std;

int main()
{
	Coin coin;
	int h = 0, t = 0;

	cout << coin.getSide() << endl;
	for (int i = 0; i < 20; i++)
	{
		coin.toss();
		cout << coin.getSide() << endl;
		if (coin.getSide() == "Heads")
			h++;
		else
			t++;
	}

	cout << "Heads came up " << h << " times." << endl;
	cout << "Tails came up " << t << " times." << endl;

	return 0;
}
