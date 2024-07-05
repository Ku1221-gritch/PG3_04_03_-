#pragma once
#include"Animal.h"

class Chicken :public Animal
{
public://メンバ関数
	//コンストラクタ（宣言）
	Chicken(const char* name);
	//デストラクタ（宣言）
	virtual ~Chicken();
	//鳴き声（宣言）
	void Cry() override;

private://メンバ変数
	const char* name;
};