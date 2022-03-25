#include "practice.h"
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

int main()
{
    int playerInput;
    cout << "Hello!\n\n";
    while (true)
    {
        cout << "Please input a number for the practise you'd like to run: ";
        cin >> playerInput;
        switch (playerInput)
        {
        case 0:
            cout << "Ciao!";
            return 0;
        case 1:
            int numIn1, numIn2;
            cout << "This will give you the remainder of your first input divided by your second input.\nPlease input your first number: ";
            cin >> numIn1;
            cout << "Please input your second number: ";
            cin >> numIn2;
            cout << "The remainder of those two is " << one(numIn1, numIn2) << ".\n\n";
            break;
        case 2:
            float baseIn, heightIn;
            cout << "This will give you the surface area of a triangle of the width and height you input.\nPlease input the height: ";
            cin >> baseIn;
            cout << "Please input the width: ";
            cin >> heightIn;
            cout << "The area is " << two(baseIn, heightIn) << " units square.\n\n";
            break;
        case 3:
            three();
            break;
        default:
            cout << "Please enter a valid number.\n";
            break;
        }
    }
}