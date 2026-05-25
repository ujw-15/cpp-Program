#include "Platinum.h"

Platinum::Platinum()
{
}

void Platinum::Promote()
{
   
    while (true)
    {

        cout << "choice: 1,2,3 (default: exit)\n" << endl;
        
        cin >> number;

        switch (number) {

        case 1:
            cout << "Diamond\n" << endl;
            break;

        case 2:
            cout << "Emerald\n" << endl;
            break;

        case 3:
            cout << "Platinum\n" << endl;
            break;

        default:
            cout << "exit" << endl;
            return;

        }
    }
}
