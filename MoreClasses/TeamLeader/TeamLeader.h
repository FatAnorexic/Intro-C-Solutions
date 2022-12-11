#ifndef TEAMLEADER_H
#define TEAMLEADER_H
#include "../Employees and Production/ProductionWorker.h"


class TeamLeader :public ProductionWorker
{
private:
	double bonus; int training, tAttended;

public:
	TeamLeader() :ProductionWorker() {
		bonus = 0.0;
		training = 0;
		tAttended = 0;
	}

	TeamLeader(double b, int t, int ta, std::string n, std::string id, int y,
		int s, double p) :ProductionWorker(n, id, y, s, p) {
		
		bonus = b;
		training = t;
		tAttended = ta;
	}

	void setBonus(double b) { bonus = b; }
	void setTraining(int t) { training = t; }
	void setTAttended(int ta) { tAttended = ta; }

	double getBonus() const { return bonus; }
	int getTraining() const { return training; }
	int getAttended() const { return tAttended; }
};
#endif // !TEAMLEADER_H
