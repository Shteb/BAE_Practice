#pragma once

#include <string>
using std::string;


class dog
{
    string breedName;
    string furColour;
    int barkVolume;
public:
    dog();

    dog(int barkVolumeIn);

    void setBarkVolume(int barkVolumeIn);

    int getBarkVolume();

    void bark();

    void run();
};