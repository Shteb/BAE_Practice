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
        cout << "Please input a number for the practise you'd like to run.\n\n";
        cin >> playerInput;
        switch (playerInput)
        {
        case 0:
            cout << "Ciao!";
            return 0;
        case 1:
            one();
            break;
        case 2:
            two();
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