#include<stdio.h>
#include"Animal.h"
#include"Dog.h"
#include"Cat.h"
#include"Chicken.h"

int main()
{
	Animal* animal[3];

	//�����̖���
	animal[0] = new Dog;//���̖���
	animal[1] = new Cat;//�L�̖���
	animal[2] = new Chicken;//�{�̖���

	for (int i = 0; i < 3; i++)
	{
		animal[i]->Initialize();
		animal[i]->Cry();
	}
	delete* animal;

	return 0;
}