#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    if(num>0)
        cout<<num<<" is positive";
    else if(num==0)
        cout<<num<<" is zero";
    else
        cout<<num<<" is negative";
}