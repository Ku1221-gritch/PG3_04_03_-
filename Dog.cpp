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
	printf("%s�Ɩ���\n", name);
}

