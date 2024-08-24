/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 026_example.cpp
 *   Title          : Template Class
 *   Description    : This program demonstrates the use of class templates.
 *                    Class template provides a specification for generating classes based on 
 *                    parameters.
 *                    Class templates are generally used to implement containers.
 *                    A class template is instantiated by passing a given set of types to it 
 *                    as template arguments.              
 *-----------------------------------------------------------------------------------------------*/

#include <iostream>
using namespace std;
template <class T>
class MyTemplate
{
    T element;

public:
    MyTemplate(T arg)
    {
        element = arg;
    }
    T divideBy2()
    {
        return element / 2;
    }
};
int main()
{
    MyTemplate<int> m(10);
    cout <<"division : "<< m.divideBy2() << endl;
    MyTemplate<float> m1(10.50f);
    cout <<"division : "<< m.divideBy2() << endl;
    return 0;
}