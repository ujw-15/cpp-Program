#pragma once
#include "Material.h"
class Platinum :
    public Material
{
protected:
    int number = 0;

public:
    Platinum();
    
    virtual void Promote() override;
};

