#include<iostream>
using namespace std;

void printArray(int arr[], int n) {

    if(n == -1)
        return;

    cout<<arr[n]<<" ";
    printArray(arr, n-1);
}

int main() {
    int arr[20];
    int n;

    cout<<"Enter the size max(20) : ";
    cin>>n;
    cout<<"Enter the elements : ";
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
    }
    printArray(arr, n-1);
}