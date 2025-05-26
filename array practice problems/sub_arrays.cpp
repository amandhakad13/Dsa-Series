#include<iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size : ";
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    cout<<"Sub arrays of given array is :- "<<endl;
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            for(int k=i; k<=j; k++) {
                cout<<arr[k]<<" ";
            }
            cout<<" ";
        }
        cout<<endl;
    }
}