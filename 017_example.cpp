/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 017_example.cpp
 *   Title          : Runtime Polymorphism
 *   Description    : This program demonstrate the runtime polymorphism by using vurtual function.
 *-----------------------------------------------------------------------------------------------*/

#include "016_example.h"

// Please compile along with 016_example.cpp

int main()
{
    EmertxeMember *m1 = new EmertxeMember(200, "Tingu", "Mysore");
    EmertxeMember *m2 = new Candidate(300, "Pingu", "Bangalore", "ECEP", 2019);

    cout << "m1:-->\n"; m1->display_profile();
    cout << "m2:-->\n"; m2->display_profile();

    return 0;
}
