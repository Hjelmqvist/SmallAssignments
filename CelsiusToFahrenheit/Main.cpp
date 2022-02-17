#include <iostream>
#include <string>

using namespace std;

int getInput(string prompt) {
	cout << prompt;
	int number;
	cin >> number;
	return number;
}

int celsiusToFahrenheit(int celsius) {
	return celsius * 9 / 5 + 32;
}

int main() {

	int celsius = getInput("Enter celsius: ");
	cout << celsius << " is equal to " << celsiusToFahrenheit(celsius) << " fahrenheit" << endl;

	return 0;
}