/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 019_example.cpp
 *   Title          : Naming Conflicts
 *   Description    : This program demonstrates the naming conflicts in program where you cannot 
 *                    use same name for variable although datatype is different.
 *-----------------------------------------------------------------------------------------------*/


#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    cout << x << endl;

    double x = 15.5; // Not allowed to have the same name in a local space!
    cout << x << endl;

    return 0;
}
