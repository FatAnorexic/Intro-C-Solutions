#include "ProductionWorker.h"

int ProductionWorker::shift = 1;

ProductionWorker::ProductionWorker(std::string n, std::string id, int y,
	int s, double p) :
	Employee(n, id, y) {
	if (s == 1 || s == 2)
		shift = s;
	payRate = p;
}

void ProductionWorker::setShift(int s) {
	if (s == 1 || s == 2)
		shift = s;
}