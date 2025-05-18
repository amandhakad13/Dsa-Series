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

    for(int i=n-2; i>=0; i--) {
        int swapped = 0;
        for (int j = 0; j<=i; j++) {
            if(arr[j]>arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }

        if(swapped==0) {
            break;
        }
    }

    cout<<"\nAfter sorting : ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}