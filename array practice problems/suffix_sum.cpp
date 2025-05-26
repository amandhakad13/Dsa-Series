#include<iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size : ";
    cin>>n;

    vector<int>arr(n);
    vector<int>arr1(n);

    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }   

    int suffix = arr[n-1];
    arr1[n-1] = arr[n-1];

    for(int i=n-2; i>=0; i--) {
        suffix = suffix+arr[i];
        arr1[i] = suffix;
    }
    cout<<"Prifix sum of array are : ";
    for (int i = 0; i < n; i++) {
        cout<<arr1[i]<<" ";
    }
    
} 
