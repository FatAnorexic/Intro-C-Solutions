#ifndef MILTIME_H
#define MILTIME_H
#include <string>
#include "Time.h"


class MilTime :public Time
{
protected:
	int milHours, milSeconds;

public:
	MilTime() :Time() {
		setTime(0, 0);
	}

	MilTime(int h, int s) {
		setTime(h, s);
	}

	void setTime(int, int);

	int getMilHour() const { return milHours; }

	int getStandHr() const { return getHour(); }

	MilTime operator++(int);
};
#endif // !MILTIME_H
