#pragma once

class Animal
{
public:
	//�R���X�g���N�^�i�錾�j
	Animal(const char* name);
	//�f�X�g���N�^�i�錾�j
	virtual ~Animal();
	//�����i�錾�j
	virtual void Cry();

private://�����o�ϐ�
	//���O
	const char* name;
};