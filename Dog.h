#pragma once
#include"Animal.h"

class Dog:public Animal
{
public://�����o�֐�
	//�R���X�g���N�^�i�錾�j
	Dog(const char* name);
	//�f�X�g���N�^�i�錾�j
	virtual ~Dog();
	//�����i�錾�j
	void Cry() override;

private://�����o�ϐ�
	//���O
	const char* name;
};