#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    for(int i=1; i<=n; i++) {
        char ch = 'A';
        for(int j=1; j<=n-i; j++) {
            cout<<"  ";
        }
        for(int k=1; k<=i; k++) {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}