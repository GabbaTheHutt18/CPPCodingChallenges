#include "MorseCode.h"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

MorseCode::MorseCode()
{
	MorseCodeList = {
	{ 'a', ".-"},
	{ 'b', "-..."},
	{ 'c', "-.-."}, 
	{ 'd', "-.."},
	{ 'e', "."},
	{ 'f', "..-."},
	{ 'g', "--."},
	{ 'h', "...."},
	{ 'i', ".."},
	{ 'j', ".---" },
	{ 'k', "-.-" },
	{ 'l', ".-.."},
	{ 'm', "--" },
	{ 'n', "-." },
	{ 'o', "---"},
	{ 'p', ".--." },
	{ 'q', "--.-" },
	{ 'r', ".-." },
	{ 's', "..." },
	{ 't', "-"},
	{ 'u', "..-" },
	{ 'v', "...-" },
	{ 'w', ".--" },
	{ 'x', "-..-" },
	{ 'y', "-.--" },
	{ 'z', "--.." }
	};

}

void MorseCode::ConvertMorse()
{
	string sentence;
	cout << "Enter your sentence";
	getline(cin, sentence);
	for (int i = 0; i < sentence.size(); i++)
	{
		sentence[i] = tolower(sentence[i]);
	}
	if (sentence[0] == '-' || sentence[0] == '.')
	{
		cout << DecodeMorse(sentence) << endl;
	}
	else 
	{
		cout << EncodeMorse(sentence) << endl;
	}
	

}

string MorseCode::EncodeMorse(string sentence)
{
	string Encoded = "";
	for (int i = 0; i < sentence.size(); i++)
	{
		if (MorseCodeList.find(sentence[i]) != MorseCodeList.end())
		{
			Encoded += MorseCodeList.at(sentence[i]) + " ";
		}
		
	}
	return Encoded;
}

vector<string> MorseCode::split(string sentence, char delim)
{
	stringstream holder(sentence);
	string Letter = "";
	vector<string> result;
	while (getline(holder, Letter, delim)) {
		result.push_back(Letter);
	}
	return result;
}

string MorseCode::DecodeMorse(string sentence)
{
	vector<string> SplitSentence = split(sentence, ' ');
	string Decoded = "";
	for (auto i : SplitSentence)
	{
		for (auto j : MorseCodeList)
		{
			if (j.second == i)
			{
				Decoded += j.first;
			}
		}
	}
	return Decoded;
}

