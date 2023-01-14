//This program calculates the sum of digits of a 3 digit number

#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter a 3 digit number: "<<endl;
    cin>>number;

    int first = number/100;
    number%= 100;

    int second = number/10;

    int third = number%10;

    cout<<"The sum of the digits is "<<(first+second+third)<<endl;

    return 0;
}