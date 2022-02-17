#include <iostream>
#include <string>

using namespace std;

int getInput(string prompt) {
	cout << prompt;
	int number;
	cin >> number;
	return number;
}

void swapRef(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void swapPtr(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swapMath(int& a, int& b) {
	a = a + b;
	b = a - b;
	a = a - b;
}

int main() {
	int a = getInput("Enter first number: ");
	int b = getInput("Enter second number: ");

	cout << "A = " << a << ", B = " << b << endl;
	//swapPtr(&a, &b);
	swapMath(a, b);
	cout << "Swapping" << endl;
	cout << "A = " << a << ", B = " << b << endl;
}