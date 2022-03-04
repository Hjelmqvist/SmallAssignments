#include <iostream>
#include <string>

using namespace std;

string getInput(string prompt) {
	cout << prompt;
	string input;
	getline(cin, input);
	return input;
}

bool linearSearchWord(string sentence, string word)
{
	int sentenceLength = size(sentence);
	int wordLength = size(word);

	for (int i = 0; i < sentenceLength; ++i)
	{
		for (int j = 0; j < wordLength; ++j)
		{
			if (sentence[i+j] == word[j])
			{
				if (j + 1 >= wordLength)
				{
					return true;
				}
			}
			else
			{
				break;
			}
		}
		while (sentence[i] != ' ' && i < sentenceLength) // Skip to the next word
		{
			i++;
		}
	}
	return false;
}

int main()
{
	string sentence = getInput("Enter sentence: ");
	string word = getInput("Enter word: ");
	cout << "The sentence " << (linearSearchWord(sentence, word) ? "includes" : "does not include") << " the word \"" << word << "\"" << endl;
}