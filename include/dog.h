#pragma once

#include <string>
#include "quadroped.h"
using std::string;


class dog : public quadroped
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