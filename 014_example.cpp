/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 014_example.cpp
 *   Title          : Main file - Inheritance
 *   Description    : This program demonstrate the third pillar of OOPs i.e, Inheritance. 
 *                    Inheritance is a process of creating a new class from an existing class.
 *-----------------------------------------------------------------------------------------------*/

#include "013_example.h"

// Please compile along with emertxe.cpp

int main()
{
    EmertxeMember m1(100, "Ringu", "Mangalore");
    Mentor m2(108, "Tingu", "Mysore", "Linux Systems", "Senior");
    Candidate c1(120, "Pingu", "Bangalore", "ECEP", 2019);

    cout << "m1:-->\n"; m1.display_profile();
    cout << "m2:-->\n"; m2.display_profile();
    cout << "c1:-->\n"; c1.display_profile();

    return 0;
}
