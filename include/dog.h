#pragma once

#include <string>
using std::string;


class dog
{
    string breedName;
    string furColour;
    int barkVolume;
public:

    dog(int barkVolumeIn);

    void bark();

    void run();
};