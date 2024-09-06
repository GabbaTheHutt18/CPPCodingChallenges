#pragma once
#include <string>
#include <map>
#include <vector>
using namespace std;

class MorseCode
{
public:
	map<char, string> MorseCodeList;
	MorseCode();
	
	void ConvertMorse();
	string EncodeMorse(string sentence);
	string DecodeMorse(string sentence);
	vector<string> split(string sentence, char delim);

};