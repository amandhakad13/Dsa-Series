#include<iostream>
using namespace std;

void printNos(int n) {
    if(n==1){
        cout<<n<<" ";
        return;
    }
    printNos(n-1);
    cout<<n<<" ";
}

int main() {
    int n = 10;
    printNos(n);
}