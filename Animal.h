#pragma once

class Animal
{
public:
	//コンストラクタ（宣言）
	//Animal();
	virtual void Initialize();
	//デストラクタ（宣言）
	virtual ~Animal();
	//鳴き声（宣言）
	virtual void Cry();

protected://メンバ変数
	//名前
	const char* name;
};