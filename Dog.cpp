#include<stdio.h>
#include "Dog.h"

Dog::Dog(const char* name)
{
	this->name = name;
}

Dog::~Dog()
{
}

void Dog::Cry()
{
	printf("%s‚Æ–Â‚¢‚½\n", name);
}

