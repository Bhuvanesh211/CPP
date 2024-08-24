#include <iostream>
using namespace std;
int main()
{
    int num = 10;
    int &ref = num;
    cout << &num << endl;
    cout << &ref << endl;
    cout << ref << " " << num;
    return 0;
}