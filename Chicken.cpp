#include<stdio.h>
#include "Chicken.h"

//Chicken::Chicken(const char* name)
//{
//	this->name = name;
//}

void Chicken::Initialize()
{
	name = "�R�P�R�b�R�[";
}

Chicken::~Chicken()
{
}

void Chicken::Cry()
{
	printf("%s�Ɩ���\n", name);
}
