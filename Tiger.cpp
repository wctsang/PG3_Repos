#include "Tiger.h"
#include <iostream>


// コンストラクタ
Tiger::Tiger() : Animal("Tiger")
{

}

// デストラクタ

Tiger::~Tiger()
{

}


// Print メソッドの実装
void Tiger::Print()
{
    std::cout << "Animal Type: " << name << std::endl;
}