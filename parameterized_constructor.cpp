#include <iostream>
#include <string>
using namespace std;

class Student
{
    int id;
    string name;

public:
    Student(int roll , string cer) //: id(roll), name(cer)
    {
        cout << "Constructor is called" << endl;
        id = roll;
        name = cer;
    }
    

    void display()
    {
        cout << "Id : " << id << endl;
        cout << "Name : " << name << endl;
    }
};

int main()
{
    Student st1(20 , "Bhuvi"), st2(20,"bhuvan");
    st1.display();
    st2.display();
    
    return 0;
}
