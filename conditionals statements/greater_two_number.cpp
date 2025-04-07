#include<iostream>
using namespace std;

int main() {
    int num1;
    cout<<"Enter the first no : ";
    cin>>num1;

    int num2;
    cout<<"Enter the second no : ";
    cin>>num2;

    if(num1>num2)
        cout<<num1<<" is greater";
    else if(num1<num2)
        cout<<num2<<" is greater ";
    else
        cout<<"Both are equal";

    return 0;
}