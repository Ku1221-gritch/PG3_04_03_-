#pragma once
#include"Animal.h"

class Chicken :public Animal
{
public://�����o�֐�
	//�R���X�g���N�^�i�錾�j
	void Initialize() override;

	// Chicken(const char* name);
	//�f�X�g���N�^�i�錾�j
	virtual ~Chicken();
	//�����i�錾�j
	void Cry() override;

private://�����o�ϐ�
};