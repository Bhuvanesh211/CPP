/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 015_example.cpp
 *   Title          : Main file - Run time polymorphism
 *   Description    : This program demonstrate the run time polymorphism. 
 *                    Defining in a base class a virtual function, with another version in a derived 
 *                    class,signals to the compiler that we don't want static linkage for this function. 
 *                    This sort of operation is referred to as dynamic linkage, or late binding.
 *                    This concepts are mainly used to achieve Runtime Polymorphism.
 *-----------------------------------------------------------------------------------------------*/

#include "016_example.h"

Candidate::Candidate(int id, string n, string a, string course, int year)
	  :EmertxeMember(id, n, a)
{
	this->course = course;
	this->year = year;
}

Mentor::Mentor(int id, string n, string a, string sub_taught, string rank)
       :EmertxeMember(id, n, a)
{
	this->sub_taught = sub_taught;
	this->rank = rank;
}

void EmertxeMember::display_profile(void)
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
}

void Mentor::display_profile(void)
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Subject Taught: " << sub_taught << endl;
    cout << "Rank: " << rank << endl;
}

void Candidate::display_profile(void)
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Course: " << course << endl;
    cout << "Year: " << year << endl;
}
