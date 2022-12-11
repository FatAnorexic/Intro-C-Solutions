#include <iostream>
#include "MilTime.h"


void MilTime::setTime(int h, int s){
	if (h < 0 || h>2359)
	{
		std::cout << "Error: The military clock runs on 24 hours before reseting\n"
			<< "Pleas try again with values greater than 0 and less than 2359\n\n";
		milHours = 0;
		setHour(0);
		setMin(0);
	}
	else
	{
		
		milHours = h;
		if (h < 1259)
			setHour(h / 100);
		else
			setHour((h / 100) - 12);
		setMin(h % 100);
	}
	if (s < 0 || s>59)
	{
		std::cout << "Error: seconds ranges from 0 to 59 seconds. Please try again";
		milSeconds = 0;
		setSec(0);
	}
	else
	{
		milSeconds = s;
		setSec(s);
	}
}

MilTime MilTime::operator++(int) {
	MilTime temp(milHours, milSeconds);
	milHours++;
	setTime(milHours, milSeconds);
	return temp;
}

