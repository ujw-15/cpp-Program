#pragma once
#include "Material.h"
class Platinum :
    public Material
{
protected:
    int number = 0;

public:
    Platinum();
    void Describe();
    virtual void Promote() override;
    virtual ~Platinum();
};

