// CPPCodingChallenges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "NibbleToHex.h"
#include "DoubleFactorial.h"
#include "LuckyNumber.h"
#include "JumbledNumbers.h"
#include "NumberPalindromes.h"
using namespace std;

int main()
{
    NibbleToHex NibbleToHex1 = NibbleToHex();
    DoubleFactorial DoubleFactorial1 = DoubleFactorial();
    LuckyNumber LuckyNumber1 = LuckyNumber();
    JumbledNumbers JumbledNumbers1 = JumbledNumbers();
    NumberPalindromes NumberPali1 = NumberPalindromes();
    //NibbleToHex1.ConvertNibbleToHex();
    //DoubleFactorial1.CalculateDF();
    //LuckyNumber1.CalculateLN();
    //JumbledNumbers1.CalculateJN();
    NumberPali1.CalculateNP();
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
