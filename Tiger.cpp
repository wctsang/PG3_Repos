#include "Tiger.h"
#include <iostream>


// �R���X�g���N�^
Tiger::Tiger() : Animal("Tiger")
{

}

// �f�X�g���N�^

Tiger::~Tiger()
{

}


// Print ���\�b�h�̎���
void Tiger::Print()
{
    std::cout << "Animal Type: " << name << std::endl;
}