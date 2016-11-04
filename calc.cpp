#include <iostream>
using namespace std;

int sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);

int main()
{
	cout << "Start" << endl;

	cout << sum(4, 3) << endl;
	cout << sub(4, 3) << endl;
	cout << mul(4, 3) << endl;

	cout << "End!" << endl;

	return 0;
}

int sum(int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}

int mul(int a, int b)
{
	return a*b;
}
