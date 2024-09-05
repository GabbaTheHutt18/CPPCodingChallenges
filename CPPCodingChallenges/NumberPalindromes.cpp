#include "NumberPalindromes.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

NumberPalindromes::NumberPalindromes()
{}
bool NumberPalindromes::CheckIsPali(string num)
{
	bool isPali = false;
	bool isDenary = false;
	string reversed;
	for (int i = num.length() - 1; i > -1; i--)
	{
		reversed += num[i];
	}
	if (reversed == num)
	{
		isPali = true;
	}
	return isPali;

}

string NumberPalindromes::ConvertToBinary(string num)
{
	//https://www.geeksforgeeks.org/cpp-program-for-decimal-to-binary-conversion/
	string Binary = "";
	int n = stoi(num);
	int binaryNum[32];

	int i = 0;
	while (n > 0) {
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}

	for (int j = i - 1; j >= 0; j--)
		Binary += to_string(binaryNum[j]);
	return Binary;
}

void NumberPalindromes::CalculateNP()
{
	int Choice;
	cout << "Would you like to see a list of Double Palindromes (1) Or Check your own Number?(2)";
	cin >> Choice;
	switch (Choice) {
	case 1:
		for (int i = 0; i < 20; i++)
		{
			string num = to_string(i);
			if (CheckIsPali(num) && CheckIsPali(ConvertToBinary(num)))
			{
				cout << i << " " << ConvertToBinary(num) << endl;
			}
		}
		break;
	case 2:
		int UserInput;
		cout << "Input a number" << endl;
		cin >> UserInput;
		string num = to_string(UserInput);
		string BinaryNum = ConvertToBinary(num);

		string result = (CheckIsPali(num) && CheckIsPali(BinaryNum)) ? "True" : "False";
		cout << result << endl;
		break;
	
	}
		
	
}