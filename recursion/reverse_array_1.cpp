#include<iostream>
using namespace std;

void printArray(int arr[], int index, int n) {

    if(index == n)
        return;

    printArray(arr, index+1, n);
    cout<<arr[index]<<" ";
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
    printArray(arr, 0, n);
}