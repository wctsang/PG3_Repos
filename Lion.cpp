#include "Lion.h"
#include <iostream>


// �R���X�g���N�^
Lion::Lion() : Animal("Lion") {

}

// �f�X�g���N�^
Lion::~Lion()
{

}

// Print ���\�b�h�̎���
void Lion::Print()
{
	std::cout << "Animal Type: " << name << std::endl;
}