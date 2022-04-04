#include "../include/dog.h"
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

void dog::bark(int barkCount)
{
    for (int i = 0; i < barkCount; i++)
    {
        cout << "bork ";
    }
    cout << "\n";
}

void dog::run()
{
    cout << "\"The dog borks with great velocity. Incredible.\n";
}