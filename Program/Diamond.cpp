#include "Diamond.h"

Diamond::Diamond()
{
	weight = 2.5f;
	name = "Diamond";
	Hardness = 4.5f;
}

 void Diamond::Describe()
 {
 	cout << "Name : " << name << endl;
 	cout << "weight : " << weight << "g" << endl;
	cout << "Hardness : " << Hardness << endl;
	cout << endl;
 }

 void Diamond::Promote()
 {
	 cout << "Elise" << endl;
	 cout << "Diamond Boader" << endl;
	 cout << "Eternals Capsule" << endl;
 }
