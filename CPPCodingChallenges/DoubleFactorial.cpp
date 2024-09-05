#include "DoubleFactorial.h"
#include <iostream>
#include <string>
using namespace std;

DoubleFactorial::DoubleFactorial()
{
}

void DoubleFactorial::CalculateDF()
{
	int UserInput;
	cout << "Input a number" << endl;
	cin >> UserInput;
	string Display = "";
	int Total = 1;
	for (int i = UserInput; i > 0; i -= 2)
	{
		Display += to_string(i) + " * ";
		Total *= i;
	}
	if (Display.size() > 0)
	{
		Display.erase(Display.size() - 1, 1);
		Display += " = ";
	}
	cout << UserInput << "!! = " << Display << Total << endl;

}