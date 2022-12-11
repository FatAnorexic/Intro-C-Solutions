#include <iostream>
#include "MilTime.h"

int main() {
	MilTime time(1750, 36);

	std::cout << time.getStandHr() << ":" << time.getMin() << ":" << time.getSec() << "\n";
	return 0;
}