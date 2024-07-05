#pragma once

class Animal
{
public:
	//コンストラクタ（宣言）
	Animal(const char* name);
	//デストラクタ（宣言）
	virtual ~Animal();
	//鳴き声（宣言）
	virtual void Cry();

private://メンバ変数
	//名前
	const char* name;
};