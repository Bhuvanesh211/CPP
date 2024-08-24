/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 033_example-STL-Vector-2.cpp
 *   Title          : Standard Template Library - Vector - Operation
 *   Description    : This program demonstrates the STL string library.
 *                    The Standard Template Library (STL) is a set of C++ template classes to 
                      provide common programming data structures and functions such as lists, 
					  stacks, arrays, etc.
					  
					  Vectors are same as dynamic arrays with the ability to resize itself 
                      automatically when an element is inserted or deleted, with their storage 
                      being handled automatically by the container.

                      push_back() – It push the elements into a vector from the back
                      pop_back() – It is used to pop or remove elements from a vector from the back.
                      at(i) – Returns a reference to the element at position 'i' in the vector
                      front() – Returns a reference to the first element in the vector
                      back() – Returns a reference to the last element in the vector
                      erase() – It is used to remove elements from a container from the 
                                specified position or range.
                      swap() – It is used to swap the contents of one vector with another vector 
                               of same type. Size may differ.
 *-----------------------------------------------------------------------------------------------*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Create a integer vector
    vector<int> vec1;

    //vectors to perform swap
    vector<int> vec2,vec3;

    // fill the array with 10, 8 times
    vec1.assign(8, 10);

    //display vector
    cout << "The vector elements are: ";
    for (int i = 0; i < vec1.size(); i++)
        cout << vec1[i] << " ";

    // inserts 15 to the last position
    vec1.push_back(15);
    int n = vec1.size();
    cout << "\nThe last element is: " << vec1[n - 1];

    // removes last element
    vec1.pop_back();

    // prints the vector
    cout << "\nThe vector elements are: ";
    for (int i = 0; i < vec1.size(); i++)
        cout << vec1[i] << " ";

    // inserts 5 at the beginning
    vec1.insert(vec1.begin(), 5);

    cout << "\nThe first element is: " << vec1[0];

    // removes the first element
    vec1.erase(vec1.begin());

    cout << "\nThe first element is: " << vec1[0];

    //swap the vec2 with vec3
    vec2.push_back(1);
    vec2.push_back(2);
    vec3.push_back(3);
    vec3.push_back(4);
  
    //display both the vector before swap
    cout << "\n\nVector 1: ";
    for (int i = 0; i < vec2.size(); i++)
        cout << vec2[i] << " ";
  
    cout << "\nVector 2: ";
    for (int i = 0; i < vec3.size(); i++)
        cout << vec3[i] << " ";

    //swap
    vec2.swap(vec3);

    //display both the vector after swap
    cout << "\n\nVector 1: ";
    for (int i = 0; i < vec2.size(); i++)
        cout << vec2[i] << " ";
  
    cout << "\nVector 2: ";
    for (int i = 0; i < vec3.size(); i++)
        cout << vec3[i] << " ";

    return 0;
}