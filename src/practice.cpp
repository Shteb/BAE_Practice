#include "../include/practice.h"
#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::string;
using std::vector;

int moduloFunc(int num1, int num2)
{
    return num1 % num2;
}

float triangleArea(float triBase, float triHeight)
{
    return (triBase * triHeight) / 2;
}

string partHash(string stringIn)
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

string burpGen(int burpLen)
{
    string burpOut = "Bu";
    for (int i = 0; i < burpLen; i++)
    {
        burpOut.push_back('r');
    }
    burpOut.push_back('p');
    return burpOut;
}

vector<int> removeOddsFromVect(vector<int> vectIn)
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

int countSegmentByDash(string wordIn)
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

vector<int> fibonacciGen(int toFib)
{
    vector<int> fib{0, 1};
    return fibRecursive(fib, 2, toFib);
}

vector<int> fibRecursive(vector<int> fibIn, int counter, int fibMax)
{
    if (counter < fibMax)
    {
        fibIn.push_back(fibIn[counter - 1] + fibIn[counter - 2]);
        return (fibRecursive(fibIn, ++counter, fibMax));
    }
    return fibIn;
}