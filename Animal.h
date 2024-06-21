#pragma once

class Animal
{
protected:

	const char* name;

public:
	// コンストラクタ
	Animal(const char* name);
	// デストラクタ
	virtual ~Animal();
	// print the name
	virtual void Print();

};

