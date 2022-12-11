#ifndef TIMECLOCK_H
#define TIMECLOCK_H
#include "../MilitaryTime/MilTime.h"


class TimeClock :public MilTime
{
protected:
	int startTime=0, endTime=0;
	double passed=0.0;
public:
	TimeClock() :MilTime() {
		
	}

	TimeClock(int h) :MilTime(h, 0) {
		//h is passed to the MilTime milHour member, and milSecond is set to zero
	}

	double timePassed(int startTime, int endTime) {
		return passed = (endTime - startTime)/100;
	}
};


#endif // !TIMECLOCK_H
