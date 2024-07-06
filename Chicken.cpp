#include<stdio.h>
#include "Chicken.h"

//Chicken::Chicken(const char* name)
//{
//	this->name = name;
//}

void Chicken::Initialize()
{
	name = "コケコッコー";
}

Chicken::~Chicken()
{
}

void Chicken::Cry()
{
	printf("%sと鳴いた\n", name);
}
