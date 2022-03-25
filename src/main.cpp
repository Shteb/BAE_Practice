#include "practice.h"
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

int main()
{
    int playerInput, intIn1, intIn2;
    float floatIn1, floatIn2;
    string stringIn;
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
            cout << "This will give you the remainder of your first input divided by your second input.\nPlease input your first number: ";
            cin >> intIn1;
            cout << "Please input your second number: ";
            cin >> intIn2;
            cout << "The remainder of those two is " << one(intIn1, intIn2) << ".\n\n";
            break;
        case 2:
            cout << "This will give you the surface area of a triangle of the width and height you input.\nPlease input the height: ";
            cin >> floatIn1;
            cout << "Please input the width: ";
            cin >> floatIn2;
            cout << "The area is " << two(floatIn1, floatIn2) << " units square.\n\n";
            break;
        case 3:
            cout << "This will hash all but the last 4 characters of your input, somewhat like a bank card number.\nPlease input a string of any given length to hash: ";
            cin >> stringIn;
            cout << "Your hashed string is " << three(stringIn) << ".\n\n";
            break;
        case 4:
            cout << "This will return a burp of length proportional to an integer you enter.\nPlease enter a positive integer: ";
            cin >> intIn1;
            cout << four(intIn1) << ". Do excuse my manners.\n\n";
            break;
        default:
            cout << "Please enter a valid number.\n";
            break;
        }
    }
}