//This program creates a basic calculator for basic arithmetic operations

#include<iostream>
using namespace std;

int main()
{
    int number1, number2;
    cout<<"Enter two numbers: "<<endl;
    cin>>number1>>number2;

    int addition = number1 + number2;
    int subtraction = number1 - number2;
    int multiplication = number1 * number2;
    float division = (float)number1/(float)number2;

    cout<<"Addition = "<<addition<<endl;
    cout<<"Subtraction = "<<subtraction<<endl;
    cout<<"Multiplication = "<<multiplication<<endl;
    cout<<"Division = "<<division<<endl;

    return 0;
}