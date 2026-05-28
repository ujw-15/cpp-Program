#pragma once
#include "Item.h"
class Bandage :
    public Item
{
public:
    virtual void Use() override;

    virtual ~Bandage();
};

