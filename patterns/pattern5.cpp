#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    for(int i=5; i>=1; i--) {
        for(int j=5; j>=1; j--) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}