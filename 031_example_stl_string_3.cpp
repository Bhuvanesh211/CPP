/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 030_example-STL-string-2.cpp
 *   Title          : Standard Template Library - String - Operation
 *   Description    : This program demonstrates the STL string library.
 *                    The Standard Template Library (STL) is a set of C++ template classes to 
                      provide common programming data structures and functions such as lists, 
					  stacks, arrays, etc.
					  
					  Strings are objects that represent sequences of characters.

                      The standard string class provides support for such objects with an 
					  interface similar to that of a standard container of bytes, but adding 
					  features specifically designed to operate with strings of single-byte 
					  characters. 

					   getline() - This function is used to store a stream of characters as entered
                                    by the user in the object memory.
                       push_back() - This function is used to input a character at the end of the 
                                      string.
                       pop_back() - Introduced from C++11(for strings), this function is used to 
                                     delete the last character from the string.
                       length():-This function finds the length of the string
 *-----------------------------------------------------------------------------------------------*/

#include <iostream>
using namespace std;

int main()
{
    // Declare a empty string str
    string str;

    cout<<"Enter the string value: ";
    // Taking string input using getline() function
    getline(cin, str);

    // Displaying the string
    cout << "The initial string is : ";
    cout << str << endl;

    // Using push_back() to insert a character
    str.push_back('e');

    // Displaying the string
    cout << "The string after push_back operation is : ";
    cout << str << endl;

    // Using pop_back() to delete a character
    str.pop_back();

    // Displaying the string
    cout << "The string after pop_back operation is : ";
    cout << str << endl;

    //Displaying length of the string
    cout<<"The length of the string is :"<<str.length()<<endl;
    
    return 0;
}