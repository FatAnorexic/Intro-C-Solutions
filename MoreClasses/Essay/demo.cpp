#include<iostream>
#include "Essay.h"

int main() {
	int grammar = 30, spelling = 20, length = 20, content = 30;

	Essay tom;

	tom.setGrammar(grammar), tom.setSpell(spelling), tom.setLen(length), tom.setContent(content);

	std::cout << tom.getScore() << "\n";

	return 0;
}