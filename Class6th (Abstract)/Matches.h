#pragma once
#include "Item.h"
class Matches :
    public Item
{
public:
    virtual void Use() override;

    virtual ~Matches();
};

