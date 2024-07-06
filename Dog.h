#pragma once
#include"Animal.h"

class Dog:public Animal
{
public://メンバ関数
	//コンストラクタ（宣言）
	void Initialize() override;
	//デストラクタ（宣言）
	virtual ~Dog();
	//鳴き声（宣言）
	void Cry() override;

private://メンバ変数
	//名前
	//const char* name;
};