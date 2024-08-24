/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 015_example.cpp
 *   Title          : Main file - Overriding
 *   Description    : This program demonstrate the function Overriding. 
 *                    Function overriding is a feature that allows us to have a same function in 
 *                    child class which is already present in the parent class.
 *-----------------------------------------------------------------------------------------------*/

#include "013_example.h"

// Please compile along with 013_example.h

int main()
{
    EmertxeMember *m1 = new EmertxeMember(200, "Tingu", "Mysore");
    EmertxeMember *m2 = new Candidate(300, "Pingu", "Bangalore", "ECEP", 2019);

    cout << "m1:-->\n"; m1->display_profile();
    cout << "m2:-->\n"; m2->display_profile();

    return 0;
}
