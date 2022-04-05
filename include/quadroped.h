#pragma once

#include <string>
using std::string;

class quadroped {
    int runSpeed;
public:
    void chase();
    void setRunSpeed(int runSpeedIn);
};