#include<iostream>
using namespace std;

int fibonaaci(int n) {
    if(n==1||n==2)
        return 1;

    return fibonaaci(n-2)+fibonaaci(n-1);
}

int main() {
    int n;
    cin>>n;
    cout<<fibonaaci(n);
}