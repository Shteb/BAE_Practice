#include "practice.h"
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

int one(int num1, int num2)
{
    return num1 % num2;
}

float two(float triBase, float triHeight)
{
    return (triBase * triHeight) / 2;
}

string three(string stringIn)
{
    int strInLen = stringIn.length();
    int i = 0;

    while (i < strInLen - 4)
    {
        stringIn[i] = '#';
        i++;
    }
    return stringIn;
}

string four(int burpLen)
{
    string burpOut = "Bu";
    for (int i = 0; i < burpLen; i++)
    {
        burpOut.push_back('r');
    }
    burpOut.push_back('p');
    return burpOut;
}