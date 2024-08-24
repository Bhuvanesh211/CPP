/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 021_example.cpp
 *   Title          : Namespace
 *   Description    : This program demonstrates how to resolve the naming conflicts by using 
 *                    namespace.
 *                    Namespace is an abstract space that contains a set of names
 *                    Is a declarative region that provides a scope to the identifiers 
 *                    (names of the types, function, variables etc) within it.
 *-----------------------------------------------------------------------------------------------*/


#include <iostream>

using namespace std;

namespace global
{
	int x = 10;
}

int main()
{
    double x = 15.5;
    cout << global::x << endl; // How to get the global x refernce here

    return 0;
}
