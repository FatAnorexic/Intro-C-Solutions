#include <iostream>
#include "TeamLeader.h"

int main() {

	TeamLeader boss(2500.00, 100, 80, "Alex", "1140AB", 2016, 2, 55.00);

	std::cout << "Name:\t" << boss.getName() << "\nID:\t" << boss.getID() << "\nYear Started:\t" << boss.getStartDate()
		<< "\nShift:\t" << boss.getShift() << "\nTraining Req:\t" << boss.getTraining() << "\nTraining Attended:\t"
		<< boss.getAttended() << "\nBase Hour Pay:\t" << boss.getPayRate() << "\nBonus:\t" << boss.getBonus() << "\n";

	return 0;
}