#include "Platinum.h"



Platinum::Platinum()
{
    weight = 1.5f;
    name = "Platinum";
    
}

void Platinum::Describe()
{
    cout << "Name : " << name << endl;
    cout << "weight : " << weight << "g" << endl;
}

void Platinum::Promote()
{
    cout << "Annie" << endl;
    cout << "Eternals Capsule\n" << endl;
   
    //while (true)
    //{
    //
    //    cout << "choice: 1,2,3 (default: exit)\n" << endl;
    //    
    //    cin >> number;
    //
    //    switch (number) {
    //
    //    case 1:
    //        cout << "Diamond\n" << endl;
    //        break;
    //
    //    case 2:
    //        cout << "Emerald\n" << endl;
    //        break;
    //
    //    case 3:
    //        cout << "Platinum\n" << endl;
    //        break;
    //
    //    default:
    //        cout << "exit" << endl;
    //        return;
    //
    //    }
    //}
}

Platinum::~Platinum()
{
    cout << "Release Platinum" << endl;
}
