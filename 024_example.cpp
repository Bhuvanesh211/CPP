/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 024_example.cpp
 *   Title          : Namespace - class
 *   Description    : This program demonstrates how to resolve the naming conflicts by using 
 *                    namespace.
 *                    Namespace is an abstract space that contains a set of names
 *                    Is a declarative region that provides a scope to the identifiers 
 *                    (names of the types, function, variables etc) within it.
 *-----------------------------------------------------------------------------------------------*/

#include <iostream>

using namespace std;

namespace MySpace
{
	class Employee
	{
		public:
			int id;
			string name;
	};
}

class Employee
{
	public:
		int id;
		string name;
};

int main()
{
	Employee emp1;
	MySpace::Employee emp2;

	emp1.name = "Tingu";
	emp2.name = "Pingu";

	cout << emp1.name << endl;
	cout << emp2.name << endl;

	return 0;
}
