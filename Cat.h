#pragma once
#include"Animal.h"

class Cat :public Animal
{
public://�����o�֐�
	//�R���X�g���N�^�i�錾�j
	Cat(const char* name);
	//�f�X�g���N�^�i�錾�j
	virtual ~Cat();
	//�����i�錾�j
	void Cry() override;

private://�����o�ϐ�
	const char* name;
};