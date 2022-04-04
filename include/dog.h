#pragma once

#include <string>
using std::string;


class dog
{
public:
    string breedName;
    string furColour;
    int barkVolume;

    void bark(int barkCount);

    void run();
};