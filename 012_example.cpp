/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 012_example.cpp
 *   Title          : Encapsulation
 *   Description    : This program demonstrates one of the pillar of OOPs i.e., Encapsulation.
 *-----------------------------------------------------------------------------------------------*/

#include <iostream>

using namespace std;

class Employee
{
	int id;
	public:
	int get_id(void) const {
		return id;
	}
	void set_id(int id) {
		this->id = id;
	}
};

int main()
{
	Employee e;

	e.set_id(10);
	cout << "The ID is " << e.get_id() << endl;

	return 0;
}
