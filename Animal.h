#pragma once

class Animal
{
protected:

	const char* name;

public:
	// �R���X�g���N�^
	Animal(const char* name);
	// �f�X�g���N�^
	virtual ~Animal();
	// print the name
	virtual void Print();

};

