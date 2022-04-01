#pragma once

#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::string;
using std::vector;

int moduloFunc(int i_num1, int i_num2);

float triangleArea(float triBase, float triHeight);

string partHash(string stringIn);

string burpGen(int burpLen);

vector<int> removeOddsFromVect(vector<int> vectIn);

int countSegmentByDash(string wordIn);

vector<int> fibonacciGen(int toFib);

vector<int> fibRecursive(vector<int> fibIn, int counter, int fibMax);

int dotTriangle(int triHeight);