#include<stdio.h>
#include"Animal.h"

//コンストラクタの定義
Animal::Animal(const char* name) 
{
	this->name = name;
}

Animal::~Animal()
{
	
}

void Animal::Cry()
{
	printf("%sと鳴いた\n", name);
}

