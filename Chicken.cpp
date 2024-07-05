#include<stdio.h>
#include "Chicken.h"

Chicken::Chicken(const char* name)
{
	this->name = name;
}

Chicken::~Chicken()
{
}

void Chicken::Cry()
{
	printf("%s‚Æ–Â‚¢‚½\n", name);
}
