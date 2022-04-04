#include "../include/dog.h"
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

dog::dog(int barkVolumeIn) {
    barkVolume = barkVolumeIn;
}

void dog::bark()
{
    for (int i = 0; i < barkVolume; i++)
    {
        cout << "bork ";
    }
    cout << "\n";
}

void dog::run()
{
    cout << "\"The dog borks with great velocity. Incredible.\n";
}