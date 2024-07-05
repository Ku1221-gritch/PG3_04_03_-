#pragma once
#include"Animal.h"

class Cat :public Animal
{
public://メンバ関数
	//コンストラクタ（宣言）
	Cat(const char* name);
	//デストラクタ（宣言）
	virtual ~Cat();
	//鳴き声（宣言）
	void Cry() override;

private://メンバ変数
	const char* name;
};