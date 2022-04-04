#include "../include/practice.h"
#include "../include/dog.h"
#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::string;
using std::vector;

// g++ -o main.exe main.cpp practice.cpp

int main()
{
    int playerInput, intIn1, intIn2;
    float floatIn1, floatIn2;
    string stringIn;
    vector<int> vectIntIn, vectIntDone;
    cout << "Hello!\n\n";
    while (true)
    {
        cout << "\nPlease input a number for the practise you'd like to run:\n[1] Remainder calculator\n[2] Triangle surface area\n[3] Partial string hash\n[4] Burp generator\n[5] Odd number remover\n[6] Dash counter\n[7] Fibonacci generator\n[8] Dot triangle calculator\n[9] Doggy class demo\n";
        cin >> playerInput;
        switch (playerInput)
        {
        case 0:
        {
            cout << "Ciao!";
            return 0;
        }
        case 1:
        {
            cout << "This will give you the remainder of your first input divided by your second input.\nPlease input your first number: ";
            cin >> intIn1;
            cout << "Please input your second number: ";
            cin >> intIn2;
            cout << "The remainder of those two is " << moduloFunc(intIn1, intIn2) << ".\n\n";
            break;
        }
        case 2:
        {
            cout << "This will give you the surface area of a triangle of the width and height you input.\nPlease input the height: ";
            cin >> floatIn1;
            cout << "Please input the width: ";
            cin >> floatIn2;
            cout << "The area is " << triangleArea(floatIn1, floatIn2) << " units square.\n\n";
            break;
        }
        case 3:
        {
            cout << "This will hash all but the last 4 characters of your input, somewhat like a bank card number.\nPlease input a string of any given length to hash: ";
            cin >> stringIn;
            cout << "Your hashed string is " << partHash(stringIn) << ".\n\n";
            break;
        }
        case 4:
        {
            cout << "This will return a burp of length proportional to an integer you enter.\nPlease enter a positive integer: ";
            cin >> intIn1;
            cout << burpGen(intIn1) << ". Do excuse my manners.\n\n";
            break;
        }
        case 5:
        {
            vectIntIn.clear();
            cout << "This will return a vector of integers back to you, sans the odd numbers.\nPlease input the length of the vector you'd like: ";
            cin >> intIn1;
            for (int i = 0; i < intIn1; i++)
            {
                int tmp;
                cout << "Please enter element no." << i + 1 << ": ";
                cin >> tmp;
                vectIntIn.push_back(tmp);
            }
            vectIntDone = removeOddsFromVect(vectIntIn);
            cout << "\nYour vector is now: ";
            for (int i = 0; i < vectIntDone.size() - 1; i++)
            {
                cout << vectIntDone[i] << ", ";
            }
            cout << vectIntDone[vectIntDone.size() - 1] << ".\n\n";
            break;
        }
        case 6:
        {
            cout << "This will return the number of dashes in a string given.\nPlease input a word with it separated by dashs: ";
            cin >> stringIn;
            cout << "There are " << countSegmentByDash(stringIn) << " segments to your string when separated by dash.\n";
            break;
        }
        case 7:
        {
            cout << "This will return and print the fibonachi sequence to a number of digits specified, minimum 2.\nPlease input the number of digits you would like to output: ";
            cin >> intIn1;
            vectIntDone = fibonacciGen(intIn1);
            cout << "Your fibonacci sequence is: ";
            for (int i = 0; i < vectIntDone.size() - 1; i++)
            {
                cout << vectIntDone[i] << ", ";
            }
            cout << vectIntDone[vectIntDone.size() - 1] << ".\n\n";
            break;
        }
        case 8:
        {
            cout << "This will return the number of dots in a triangle of a given number of layers.\nPlease input the height of the triangle you want: ";
            cin >> intIn1;
            cout << "Your triangle has " << dotTriangle(intIn1) << " dots in it.\n";
            break;
        }
        case 9:
        {
            cout << "This will perform some simple couts as defined by the class dog in dog.cpp.\nPlease input how many barks you'd like from our good boy: ";
            cin >> intIn1;
            dog myDog(intIn1);
            myDog.bark();
            break;
        }
        default:
            cout << "Please enter a valid number.\n";
            break;
        }
    }
}