#include<iostream>
using namespace std;

int power(int num, int pow) {
    if(pow == 0) {
        return 1;
    }

    return num * power(num, pow-1);
}

int main() {
    int num, pow;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<"Enter the power : ";
    cin>>pow;

    cout<<"power of a number is : "<<power(num, pow);
}