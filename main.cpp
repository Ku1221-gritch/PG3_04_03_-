#include<stdio.h>
#include"Animal.h"
#include"Dog.h"
#include"Cat.h"
#include"Chicken.h"

int main()
{
	Animal* animal[3];

	//“®•¨‚Ì–Â‚«º
	animal[0] = new Dog;//Œ¢‚Ì–Â‚«º
	animal[1] = new Cat;//”L‚Ì–Â‚«º
	animal[2] = new Chicken;//Œ{‚Ì–Â‚«º

	delete animal[0];
	delete animal[1];
	delete animal[2];

	return 0;
}