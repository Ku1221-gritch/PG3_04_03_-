#include<stdio.h>
#include "Cat.h"
//
//Cat::Cat(const char* name)
//{
//	this->name = name;
//}

void Cat::Initialize()
{
	name = "�j���[";
}

Cat::~Cat()
{
}

void Cat::Cry()
{
	printf("%s�Ɩ���\n", name);
}
