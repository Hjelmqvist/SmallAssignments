#include <iostream>
#include <string>
#include <map>

using namespace std;

string getInput(string prompt) {
	cout << prompt;
	string input;
	cin >> input;
	return input;
}

map<char, int> getOccurences(string& s)
{
	map<char, int> map;
	for (auto value : s)
	{
		char ch = toupper(value);
		if (map[ch] == 0)
		{
			map[ch] = 1;
		}
		else
		{
			map[ch]++;
		}
	}
	return map;
}

int main()
{
	string input = getInput("Enter string: ");
	map<char, int> map = getOccurences(input);
	for (auto value : map)
	{
		cout << value.first << ": " << value.second << endl;
	}
	return 0;
}
