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

	delete animal[0];
	delete animal[1];
	delete animal[2];

	return 0;
}