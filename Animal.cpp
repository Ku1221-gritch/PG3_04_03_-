#include<stdio.h>
#include"Animal.h"

//�R���X�g���N�^�̒�`
Animal::Animal(const char* name) 
{
	this->name = name;
}

Animal::~Animal()
{
	
}

void Animal::Cry()
{
	printf("%s�Ɩ���\n", name);
}

