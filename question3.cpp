//This program is to calculate how many girls received grade A

#include<iostream>
using namespace std;

int main()
{
    int totalStudentsA;  //number of total students getting grade A
    int boys= 17;
    int girls;

    totalStudentsA = (45*80)/100;
    girls = totalStudentsA - boys;

    cout<<"Number of girls getting grade A: "<<girls<<endl;

    return 0;
}