#include <iostream>

using namespace std;

int getNthBit(int& number, int nth)
{
	return (number >> nth) & 1;
}

void setNthBit(int& number, int nth)
{
	number |= 1 << nth;
}

int main()
{
	int number = 12; // 1100
	cout << "Number is " << number << endl;

	int bit = 0;
	cout << "Set bit " << bit << endl;
	setNthBit(number, bit);
	cout << "Number is now " << number << endl;

	bit = 2;
	cout << "Get bit " << bit << endl;
	cout << "Bit " << bit << " is set to " << getNthBit(number, bit);
	return 0;
}