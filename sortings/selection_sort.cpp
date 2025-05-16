#include<iostream>
using namespace std;

int main() {
    int arr[50];

    int n;
    cout<<"Enter the size : ";
    cin>>n;

    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    cout<<"Before sorting : ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    for(int i=0; i<n-1; i++) {
        int index = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j]<arr[index]) {
                index = j;
            }
        }
        swap(arr[i],arr[index]);
    }

    cout<<"\nAfter sorting : ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}