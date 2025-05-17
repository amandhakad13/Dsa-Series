#include<iostream>
using namespace std;

int main() {
    int arr[100];

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

    for(int i=1; i<n; i++) {
        for(int j=i; j>0; j--) {
            if(arr[j]<arr[j-1]) {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
            else {
                break;
            }
        }
    }

    cout<<"\nAfter sorting : ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
}