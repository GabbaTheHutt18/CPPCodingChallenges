#include "JumbledNumbers.h"
#include <iostream>
#include <string>
using namespace std;
JumbledNumbers::JumbledNumbers()
{}
void JumbledNumbers::CalculateJN()
{
	int UserInput;
	std::cout << "Input a number" << endl;
	cin >> UserInput;
	string num = to_string(UserInput);
	bool isJumbled = true;
	for (int i = 0; i < num.size() - 1; i++)
	{

		int currentNum = (num[i] - '0');
		int nextNum = (num[i + 1] - '0');
		if (currentNum + 1 == nextNum || currentNum - 1 == nextNum)
		{
			isJumbled = true;
		}
		else if (currentNum == nextNum)
		{
			isJumbled = true;
		}
		else
		{
			isJumbled = false;
			break;
		}

	}
	if (isJumbled)
	{
		cout << "True, all neighbouring digits differ by a max of 1" << endl;
	}
	else
	{
		cout << "False" << endl;
	}


}