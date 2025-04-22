#include<iostream>
using namespace std;

void even(int n) {
    if(n==2) {
        cout<<2<<" ";
        return;
    }

    even(n-2);
    cout<<n<<" ";
}

int main() {
    int n;
    cin>>n;

    if(n%2 == 1)
        n--;

    even(n);
}