#include<stdio.h>
#include "Dog.h"

//Dog::Dog()
//{
//}

void Dog::Initialize()
{
	name = "ワン";

}

Dog::~Dog()
{
}

void Dog::Cry()
{
	printf("%sと鳴いた\n", name);
}

