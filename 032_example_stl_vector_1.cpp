/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 032_example-STL-Vector-1.cpp
 *   Title          : Standard Template Library - Vector - Creation and display
 *   Description    : This program demonstrates the STL string library.
 *                    The Standard Template Library (STL) is a set of C++ template classes to 
                      provide common programming data structures and functions such as lists, 
					  stacks, arrays, etc.
					  
					  Vectors are same as dynamic arrays with the ability to resize itself 
                      automatically when an element is inserted or deleted, with their storage 
                      being handled automatically by the container.

                      begin() – Returns an iterator pointing to the first element in the vector
                      end() – Returns an iterator pointing to the theoretical element that 
                              follows the last element in the vector.
                      size() – Returns the number of elements in the vector.
 *-----------------------------------------------------------------------------------------------*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Declaring vector
    vector<int> v;                        // empty vector of ints
    vector<int> v1(5, 10);                // five ints with value 10
    vector<int> v2(v1.begin(), v2.end()); // iterating through second vector
    vector<int> v3(v2);                   //copy of v2

    //Display all the vectors
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;

    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << endl;

    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << endl;

    for (int i = 0; i < v3.size(); i++)
        cout << v3[i] << endl;

    return 0;
}