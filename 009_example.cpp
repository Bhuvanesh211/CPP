/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 009_example.cpp
 *   Title          : Function Overloading
 *   Description    : This program demonstrate the function overloading in cpp.
 *-----------------------------------------------------------------------------------------------*/

#include <iostream>

using namespace std;

// Function Overloading
int add(int n1, int n2)
{
    return n1 + n2;
}

double add(double n1, double n2)
{
    return n1 + n2;
}

string add(string s1, string s2)
{
	// Operator Overloading
    return s1 + s2;
}

int main()
{
    cout << add(5, 10) << endl;
    cout << add(3.5, 6.5) << endl;
	cout << add("Hell", "o") << endl;

	return 0;
}
