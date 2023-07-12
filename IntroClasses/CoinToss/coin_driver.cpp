#include <iostream>
#include <ctime>
#include <cstdlib>
#include "CoinToss.h"

int main(){
	Coin coin;
	
	int h = 0, t = 0;	//initialize the counters

	std::cout << coin.getSide() <<'\n\n';

	for (int i = 0; i < 20; i++){
		coin.toss();
		
		std::cout << coin.getSide() << '\n';
		
		coin.getSide()=="Heads" ? h++ : t++;
	}
	
	std::cout << '\n\n';
	printf("Heads came up %i times.\n", h);
	printf("Tails came up %i times.\n",t);

	system("pause");
	return 0;
}
