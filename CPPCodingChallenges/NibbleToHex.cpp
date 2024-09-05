#include "NibbleToHex.h"
#include <iostream>
#include<string>
using namespace std;

NibbleToHex::NibbleToHex()
{
}
void NibbleToHex::ConvertNibbleToHex()
{
	bool isValid = false;
	string UserInput;
	string hex = "";
	while (!isValid)
	{
		cout << "Please Input Your Nibble" << endl;
		cin >> UserInput;
		int Length = UserInput.size();
		for (int i = 0; i < UserInput.size(); i++) {
			string bit(1, UserInput[i]);
			if (stoi(bit) != 0 && stoi(bit) != 1)
			{
				isValid = false;
				break;
			}
			else
			{
				isValid = true;
			}
		}
	}
	while (UserInput.size() / 4 != 0)
	{
		int StartPos = UserInput.size() - 4;
		int dec = ((UserInput[StartPos + 3] - '0') * 1) + ((UserInput[StartPos + 2] - '0') * 2) + ((UserInput[StartPos + 1] - '0') * 4) + ((UserInput[StartPos] - '0') * 8);
		if (dec < 10)
		{
			hex = to_string(dec) + hex;
		}
		else
		{
			switch (dec) {
			case 10:
				hex = "A" + hex;
				break;
			case 11:
				hex = "B" + hex;
				break;
			case 12:
				hex = "C" + hex;
				break;
			case 13:
				hex = "D" + hex;
				break;
			case 14:
				hex = "E" + hex;
				break;
			case 15:
				hex = "F" + hex;
				break;
			}
		}
		UserInput.erase(StartPos, 4);
	}
	int powerOf2 = 0;
	int result = 0;
	for (int i = UserInput.size() - 1; i > -1; i--)
	{
		int multipleBy = pow(2, powerOf2);
		powerOf2++;
		result += multipleBy * stoi(to_string(UserInput[i] - '0'));
	}
	if (result != 0)
	{
		hex = to_string(result) + hex;
	}

	cout << hex << endl;


}
