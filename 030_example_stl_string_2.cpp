/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 030_example-STL-string-2.cpp
 *   Title          : Standard Template Library - String - Comparison
 *   Description    : This program demonstrates the STL string library.
 *                    The Standard Template Library (STL) is a set of C++ template classes to 
                      provide common programming data structures and functions such as lists, 
					  stacks, arrays, etc.
					  
					  Strings are objects that represent sequences of characters.

                      The standard string class provides support for such objects with an 
					  interface similar to that of a standard container of bytes, but adding 
					  features specifically designed to operate with strings of single-byte 
					  characters. 

					  compare() -- string compare method will compare 2 string and returns 0,
					               if the strings are equal.
 *-----------------------------------------------------------------------------------------------*/

#include <iostream>
using namespace std;

int main()
{
	string s, s1;
	s = "HELLO";
	s1 = "HELLO";

	if(s.compare(s1) == 0)
		cout<<s<<" is equal to "<<s1<<endl;
	else
		cout<<s<<" is not equal to "<<s1<<endl;
	
	s.append(" WORLD");
	cout<<s<<endl;

	if(s.compare(s1) == 0)
		cout<<s<<" is equal to "<<s1<<endl;
	else
		cout<<s<<" is not equal to "<<s1<<endl;

	return 0;
}