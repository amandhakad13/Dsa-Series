#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    char ch = 'a';

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
    return 0;
}