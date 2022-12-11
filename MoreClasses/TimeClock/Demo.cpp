#include <iostream>
#include "TimeClock.h"

int main() {
	TimeClock start(900), end(2100), total;

	std::cout << total.timePassed(start.getMilHour(), end.getMilHour()) << "\n";

	return 0;
}