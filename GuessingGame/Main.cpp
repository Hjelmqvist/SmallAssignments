#include <iostream>
#include <string>

#define MIN 1
#define MAX 100
#define MAX_GUESSES 10

using namespace std;

int getInput(string prompt) {
	cout << prompt;
	int number;
	cin >> number;
	return number;
}

int main() {
	const int secretNumber = rand() % MAX + MIN; // Between min and max numbers
	int guesses = 1;
	int guess = 0;
	bool won = false;

	while (guesses < MAX_GUESSES)
	{
		cout << "Guess " << guesses << "/" << MAX_GUESSES << endl;
		guess = getInput("Take a guess: ");

		if (guess < MIN || guess > MAX) {
			cout << "Invalid input!" << endl;
			continue;
		}

		if (guess == secretNumber)
		{
			won = true;
			break;
		}
		else if (guess < secretNumber) {
			cout << "Too low!" << endl;
		}
		else {
			cout << "Too high!" << endl;
		}
		guesses++;
	}

	cout << (won ? "You found the secret number!" : "You lost!") << endl;
}