#ifndef ESSAY_H
#define ESSAY_H
#include "GradedActivity.h"

class Essay :public GradedActivity
{
private:
	int grammar, spelling, length, content;

public:
	Essay() :GradedActivity() {
		grammar = 0, spelling = 0, length = 0, content = 0;
	}

	void setGrammar(int g) {
		g < 31 ? grammar=g:grammar=0;
		
		score += grammar;
	}

	void setSpell(int s) {
		s < 21 ? spelling = s : spelling = 0;
		score += spelling;
	}

	void setLen(int l) {
		l < 21 ? length = l:length = 0;
		score += length;
	}

	void setContent(int c) { 
	
		c < 31 ? content = c:content = 0;
		score += content;
	}
};
#endif // !ESSAY_H
