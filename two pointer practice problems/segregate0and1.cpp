#include<iostream>
using namespace std;

void segregate0and1(int arr[], int n) {
        
        int start = 0, end = n-1;
        
        while(start<end) {
            if(arr[start]==0)
                start++;
            else {
                if(arr[end]==0) {
                    int temp = arr[start];
                    arr[start] = arr[end];
                    arr[end] = temp;
                }
                else {
                    end--;
                }
            }
        }
    }

int main() {
    int arr[50];
    int n;
    cout<<"Enter the size : ";
    cin>>n;

    cout<<"Enter the elements : ";
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Before seprate 0 and 1 : ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    segregate0and1(arr, n);

    cout<<"\nAfter seprate 0 and 1 : ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}