#include<iostream>
using namespace std;

void printNos(int n) {
    if(n == 1) {
        cout<<1;
        return;
    }

    cout<<n<<" ";
    printNos(n-1);
}

int main() {
    int n;
    cin>>n;
    printNos(n);
}