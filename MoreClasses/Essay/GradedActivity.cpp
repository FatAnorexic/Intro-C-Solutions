#include "GradedActivity.h"

char GradedActivity::getLetterGrade() const
{
	return (
		score>89 ? 'A':
		score>79 ? 'B':
		score>69 ? 'C':
		score>59 ? 'D':'F');
}