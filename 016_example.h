/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 013_example.h
 *   Title          : Header file - Run time polymorphism
 *   Description    : Header file which includes the defnition of all the class, inheritance, and
 *                    member function prototypes.
 *-----------------------------------------------------------------------------------------------*/

#ifndef EXAMPLE_016_H
#define EXAMPLE_016_H

#include <iostream>
#include <cstring>

using namespace std;

class EmertxeMember
{
protected:
   	int id;
	string name;
	string address;
public:
	EmertxeMember(int id, string n, string a)
	{
		this->id = id;
		name = n;
		address = a; 
	}
	void change_profile(string na);
	virtual void display_profile(void);
};

class Candidate : public EmertxeMember
{ 
	// Note have not considered all cases said in the slide
   	string course; 
	int year;
public:
	Candidate(int id, string n, string a, string course, int year);
	void display_profile(void);
};

class Mentor : public EmertxeMember
{ 
	// Note have not considered all cases said in the slide
   	string sub_taught; 
	string rank;
public:
	Mentor(int id, string n, string a, string sub_taught, string rank);
	void display_profile(void);
};

#endif
