#pragma once

class Animal
{
public:
	//�R���X�g���N�^�i�錾�j
	//Animal();
	virtual void Initialize();
	//�f�X�g���N�^�i�錾�j
	virtual ~Animal();
	//�����i�錾�j
	virtual void Cry();

protected://�����o�ϐ�
	//���O
	const char* name;
};