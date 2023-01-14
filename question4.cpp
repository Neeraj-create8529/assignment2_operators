//This program is to calculate sum of first and second last digit of a 5 digit number

#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter a 5 digit number: "<<endl;
    cin>>number;

    int first = number/10000;
    number%= 10000;

    int second = number/1000;
    number%= 1000;

    int third = number/100;
    number%= 100;

    int fourth = number/10;

    cout<<"The sum of first and fourth digit is "<<(first+fourth)<<endl;

    return 0;
}