/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 029_example-STL-string-1.cpp
 *   Title          : Standard Template Library - String - 1
 *   Description    : This program demonstrates the STL string library.
 *                    The Standard Template Library (STL) is a set of C++ template classes to 
                      provide common programming data structures and functions such as lists, 
					  stacks, arrays, etc.
					  
					  Strings are objects that represent sequences of characters.

                      The standard string class provides support for such objects with an 
					  interface similar to that of a standard container of bytes, but adding 
					  features specifically designed to operate with strings of single-byte 
					  characters. 
 *-----------------------------------------------------------------------------------------------*/

#include <iostream>
using namespace std;

int main()
{
	// String creation and initialization in a different way
	string s0;				   // s0=""
	string s1 = "Hello World"; //s1="Hello World"
	string s2(s1);
	string s3(s1, 1, 3);	   //s3="ell"
	string s4(5, '*');		  //s4="*****"
	string s5(s1.begin(), s1.begin() + 3); // s5="Hel"
	return 0;
}