/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 004_example.cpp
 *   Title          : structure vs class
 *   Description    : This program demonstrates the difference between structure and class in c++.
 *-----------------------------------------------------------------------------------------------*/

#include <iostream>

using namespace std;

struct sEmployee
{
    int id;
    string name;
    string address;
};

class cEmployee
{
    int id;
    string name;
    string address;
};

int main()
{
    sEmployee emp1;
    cEmployee emp2;

    // Allowed, Since public by
    // default
    emp1.name = "Tingu";
    // Not allowed, Since private
    // by default
    emp2.name = "Pingu";

    return 0;
}
