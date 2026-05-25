#pragma once
#include "Material.h"

class Emerald : public Material
{
private:
	float Transparency;
public:
	Emerald();

	void Describe();
	virtual void Promote() override;
};

