#include<stdio.h>
#include "Cat.h"
//
//Cat::Cat(const char* name)
//{
//	this->name = name;
//}

void Cat::Initialize()
{
	name = "ニャー";
}

Cat::~Cat()
{
}

void Cat::Cry()
{
	printf("%sと鳴いた\n", name);
}
