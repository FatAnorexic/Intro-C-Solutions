//Spec file for die class

#ifndef DIE_H
#define DIE_H

class Die
{
	//private values will be the number of sides, and the value each side holds
private:
	int sides;
	int value;
	//Public values include the constructor, the roll method and accessor methods
public:
	Die(int = 6);	//constructor
	void roll();	//roll method
	//accessor methods
	int getSides();
	int getValue();

};
#endif // !DIE_H
