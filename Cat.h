#pragma once
#include"Animal.h"

class Cat :public Animal
{
public://�����o�֐�
	//�R���X�g���N�^�i�錾�j
	//Cat(const char* name);
	void Initialize() override;

	//�f�X�g���N�^�i�錾�j
	virtual ~Cat();
	//�����i�錾�j
	void Cry() override;

};