//This program checks whether both the conditions a<50 and a<b are true

#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"Enter a and b : "<<endl;
    cin>>a>>b;

    cout<<((a<50)&&(a<b))<<endl;

    return 0;
}