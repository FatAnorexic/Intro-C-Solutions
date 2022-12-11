#ifndef ESSAY_H
#define ESSAY_H
#include "../../../Chapter15/14-1/14-1/GradedActivity.h"

class Essay :public GradedActivity
{
private:
	int grammar, spelling, length, content;

public:
	Essay() :GradedActivity() {
		grammar = 0, spelling = 0, length = 0, content = 0;
	}

	void setGrammar(int g) {
		if (g < 31)
			grammar = g;
		else
			grammar = 0;
		score += grammar;
	}

	void setSpell(int s) {
		if (s < 21)
			spelling = s;
		else
			spelling = 0;
		score += spelling;
	}

	void setLen(int l) {
		if (l < 21)
			length = l;
		else
			length = 0;
		score += length;
	}

	void setContent(int c) { 
	
		if (c < 31)
			content = c;
		else
			content = 0;
		score += content;
	}



};
#endif // !ESSAY_H
