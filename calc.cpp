#include <iostream>
using namespace std;

int sum(int a, int b);

int main()
{
	cout << "Init" << endl;

	cout << a << " + " << b << " = " << sum(4, 3) << endl;

	return 0;
}

int sum(int a, int b)
{
	return a+b;
}
