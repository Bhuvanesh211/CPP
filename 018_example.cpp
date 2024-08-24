/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 018_example.cpp
 *   Title          : Abstract class
 *   Description    : This program demonstrates the abstract class nad pure virtual function.
 *                    If there is no meaningful definition you could give for the function in the 
 *                    base class. But still you want to include a virtual function in a base class 
 *                    so that it may be redefined in a derived class to suit the objects of that 
 *                    class.
 *                    A class is abstract if it has at least one pure virtual function.
 *-----------------------------------------------------------------------------------------------*/

#include <iostream>

using namespace std;
//abstract class
class Polygon 
{
	protected:
		int width, height;
		string shape_name;
	public:
		Polygon() { }

		Polygon(int a, int b, string name) : width(a), height(b), shape_name(name) { }

		string get_name(void) {
			return shape_name;
		}

		/* A pure virtual functions */
		virtual int get_area(void)=0;

		void print_area(void) {
			cout << "The area of " << this->get_name() << " is " 
								   << this->get_area() << endl;
		}
};

class Rectangle: public Polygon
{
	public:
		Rectangle(int a, int b, string name) : Polygon(a, b, name) { }

		int get_area()
		{ 
			return width * height; 
		}
};

class Triangle: public Polygon
{
	public:
		Triangle(int a, int b, string name) : Polygon(a, b, name) { }

		int get_area()
		{ 
			return width * height / 2;
		}
};

int main()
{
	Rectangle rect (4, 5, "Rectangle");
	Triangle trgl (4, 5, "Triangle");
	Polygon *shapes[] = {&rect, &trgl};

	for (int i = 0; i < 2; i++)
	{
		shapes[i]->print_area();
	}

	return 0;
}
