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

    int prifix = arr[0];
    arr1[0] = arr[0];

    for(int i=1; i<n; i++) {
        prifix = prifix+arr[i];
        arr1[i] = prifix;
    }
    cout<<"Prifix sum of array are : ";
    for (int i = 0; i < n; i++) {
        cout<<arr1[i]<<" ";
    }
    
} 
