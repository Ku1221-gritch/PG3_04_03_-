#include<stdio.h>
#include "Cat.h"

Cat::Cat(const char* name)
{
	this->name = name;
}

Cat::~Cat()
{
}

void Cat::Cry()
{
	printf("%s�Ɩ���\n", name);
}
