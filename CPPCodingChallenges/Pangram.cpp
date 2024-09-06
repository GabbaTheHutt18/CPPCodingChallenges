#include "Pangram.h"
#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

Pangram::Pangram()
{}
void Pangram::CalculatePan()
{
	map<char, int> alphabet = {
	{ 'a', 0 },
	{ 'b', 0 },
	{ 'c', 0 },
	{ 'd', 0 },
	{ 'e', 0 },
	{ 'f', 0 },
	{ 'g', 0 },
	{ 'h', 0 },
	{ 'i', 0 },
	{ 'j', 0 },
	{ 'k', 0 },
	{ 'l', 0 },
	{ 'm', 0 },
	{ 'n', 0 },
	{ 'o', 0 },
	{ 'p', 0 },
	{ 'q', 0 },
	{ 'r', 0 },
	{ 's', 0 },
	{ 't', 0 },
	{ 'u', 0 },
	{ 'v', 0 },
	{ 'w', 0 },
	{ 'x', 0 },
	{ 'y', 0 },
	{ 'z', 0 }
	};
	bool isPangram = true;
	string sentence;
	vector<char> notInclude;
	cout << "Enter your sentence";
	getline(cin, sentence);
	for (int i = 0; i < sentence.size(); i++)
	{
		sentence[i] = tolower(sentence[i]);
		alphabet[sentence[i]] += 1;
	}
	for (auto i : alphabet)
	{	
		if (i.second == 0)
		{
			isPangram = false; 
			notInclude.push_back(i.first);
		}
	}
	if (isPangram)
	{
		cout << "You have entered a pangram which contains every letter in the alphabet at least once." << endl;
	}
	else
	{
		cout << " Your sentence is not a pangram as it does not contain the following letters : ";
		for (char letter : notInclude) {
			cout << letter << " ";
		}
		
		cout << endl; 
	}
	
}