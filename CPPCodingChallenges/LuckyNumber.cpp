#include "LuckyNumber.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
LuckyNumber::LuckyNumber()
{
}

void LuckyNumber::CalculateLN()
{
	int UserInput;
	cout << "Input a number" << endl;
	cin >> UserInput;
	string num = to_string(UserInput);
	vector<string> repeated;
	bool isLucky = true;
	for (int i = 0; i < to_string(UserInput).size(); i++)
	{
		for (int j = i + 1; j < to_string(UserInput).size(); j++)
		{
			if (num[i] == num[j])
			{
				isLucky = false;
				if (find(repeated.begin(), repeated.end(), to_string(num[i] - '0')) == repeated.end())
				{
					repeated.push_back(to_string(num[i] - '0'));
				}

			}
		}
	}

	if (isLucky)
	{
		cout << "True, all digits are different" << endl;
	}
	else
	{
		cout << "False, the following digits are repeated: ";
		for (int i = 0; i < repeated.size(); i++)
		{
			cout << repeated[i];
		}
		cout << endl;
	}

}