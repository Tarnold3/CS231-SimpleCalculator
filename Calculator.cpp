//Programming Project 3
//Author: Tucker Arnold

#include <iostream>  //Library

using namespace std;
int main()
{
    int numerator, denominator;   //Variables
    char operation;

    cout << "Enter your calculation: ";    // Display
    cin >> numerator >> operation >> denominator; //Input from User

    switch (operation) {   //Switch Statement & Case Statement
        case '*':
            cout << numerator * denominator << endl;  //Multipication
            break;
        case '+':
            cout << numerator + denominator << endl; //Addition
            break;
        case '-':
            cout << numerator - denominator << endl; //Subtraction
            break;
        case '/':
            if (numerator == 0 || denominator == 0) {
                cout << "Cannot divide by zero" << endl;  //Display if denominator is 0
                return 1;
            }
            cout << numerator / denominator << endl; //Division
            break;
      
    }

    return 0;
}
