#include "Emerald.h"

Emerald::Emerald()
{
	weight = 1.75f;
	name = "Emerald";
	Transparency = 6.7f;
}

void Emerald::Describe()
{
	cout << "Name : " << name << endl;
	cout << "weight : " << weight << "g" << endl;
	cout << "Transparency : " << Transparency << endl;
}

void Emerald::Promote()
{
	cout << "Ryze" << endl;
	cout << "Emerald Boader" << endl;
	cout << "Eternals Capsule" << endl;
}

Emerald::~Emerald()
{
	cout << "Release Emerald" << endl;
}



