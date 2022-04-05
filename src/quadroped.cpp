#include "../include/quadroped.h"
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

void quadroped::chase() {
    cout << "It gives chase at " << runSpeed << " mph!\n";
}

void quadroped::setRunSpeed(int runSpeedIn) {
    runSpeed = runSpeedIn;
}