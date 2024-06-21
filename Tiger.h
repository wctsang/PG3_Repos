#pragma once
#include "Animal.h"

class Tiger : public Animal
{
public:
    Tiger();

    ~Tiger();

    void Print() override;
};
