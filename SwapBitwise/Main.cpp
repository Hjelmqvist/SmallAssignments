#include <iostream>

using namespace std;

void bitwiseSwap(int& a, int& b)
{
	// a 0011 = 3
	// b 0111 = 7

	a = a ^ b; // a 0100 = 4
	b = a ^ b; // b 0011 = 3
	a = a ^ b; // a 0111 = 7
}

int main()
{
	int a = 3;
	int b = 7;

	bitwiseSwap(a, b);

	cout << a << " " << b;
	return 0;
}