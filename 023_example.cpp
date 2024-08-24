#include <iostream>

using namespace std;

namespace first
{
	int x = 10;
}

namespace second
{
	double x = 12.120;
}

int main()
{
	using namespace second;

	cout << x << endl;

	return 0;
}
