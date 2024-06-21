#include "Lion.h"
#include <iostream>


// コンストラクタ
Lion::Lion() : Animal("Lion") {

}

// デストラクタ
Lion::~Lion()
{

}

// Print メソッドの実装
void Lion::Print()
{
	std::cout << "Animal Type: " << name << std::endl;
}