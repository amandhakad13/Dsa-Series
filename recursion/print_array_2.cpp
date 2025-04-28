#include<iostream>
using namespace std;

void printArray(int arr[], int n) {

    if(n == -1)
        return;

    printArray(arr, n-1);
    cout<<arr[n]<<" ";
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