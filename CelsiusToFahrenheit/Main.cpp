#include <iostream>
#include <string>

using namespace std;

int getInput(string prompt) {
	cout << prompt;
	int input;
	cin >> input;
	return input;
}

float celsiusToFahrenheit(float celsius) {
	return celsius * 9 / 5 + 32;
}

int main() {

	int celsius = getInput("Enter celsius: ");
	cout << celsius << " is equal to " << celsiusToFahrenheit(celsius) << " fahrenheit" << endl;

	return 0;
}