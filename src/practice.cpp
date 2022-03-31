#include "../include/practice.h"
#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::string;
using std::vector;

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

vector<int> five(vector<int> vectIn)
{
    for (int i = 0; i < vectIn.size(); i++)
    {
        if (vectIn[i] % 2 != 0)
        {
            vectIn.erase(vectIn.begin() + i);
        }
    }
    return vectIn;
}

int six(string wordIn)
{
    int dashCount = 0;
    for (char &c : wordIn)
    {
        if (c == '-')
        {
            dashCount++;
        }
    }
    return ++dashCount;
}