/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 013_example.cpp
 *   Title          : Inheritance
 *   Description    : This program demonstrate the third pillar of OOPs i.e, Inheritance.
 *-----------------------------------------------------------------------------------------------*/

#include "013_example.h"

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
    cout << "Course" << course << endl;
    cout << "Year: " << year << endl;
}
