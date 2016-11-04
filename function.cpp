#include <stdio.h>

int sum(int a, int b);
int sub(int a, int b);

int main()
{
	cout << sum(5, 6) << endl;
	cout << sub(5, 6) << endl;
	return 0;
}

int sum(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}
