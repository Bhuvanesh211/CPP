/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 025_example.cpp
 *   Title          : Template Function
 *   Description    : This program demonstrates the use of funtion templates.
 *                    Function templates are special functions that can operate with generic types.
 *                    This allows us to create a function template whose functionality can be 
 *                    adapted to more than one type or class without repeating the entire code 
 *                    for each type.               
 *-----------------------------------------------------------------------------------------------*/

#include <iostream>
using namespace std;
template <typename T>
T Max(T a, T b)
{
	return b < a ? a : b;
}
int main()
{
	cout << Max(10, 20) << endl;
	cout << Max(33.5, 20.2) << endl;
	cout << Max(3.5, 10.2) << endl;
	cout << Max('A', 'B') << endl;
	cout << Max('Z', 'Y') << endl;
	return 0;
}