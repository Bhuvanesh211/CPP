/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 005_example.cpp
 *   Title          : structure vs class
 *   Description    : This program demonstrates the acces specifiers in class and structure.
 *-----------------------------------------------------------------------------------------------*/

#include <iostream>

using namespace std;

struct sEmployee
{
    int id;
private:
    string name;
    string address;
};

class cEmployee
{
    int id;
public:
    string name;
    string address;
};

int main()
{
    sEmployee emp1;
    cEmployee emp2;

    // Allowed, Since declared
    // private
    emp1.name = "Tingu";
    // Allowed, Since declared
    // public
    emp2.name = "Pingu";

    return 0;
}
