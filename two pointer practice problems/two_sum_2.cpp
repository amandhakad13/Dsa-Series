#include<iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {2, 7, 11, 15, 27};
    int n = 5, target = 42; 
    bool ispresent = 0;
    vector<int>vec;

    for(int i=0; i<n-1; i++) {
        int x = target-arr[i];
        int start = i+1, end = n-1, mid;
        while(start<=end) {
            mid = (start+end)/2;
            if(arr[mid]==x) {
                vec.push_back(arr[i]);
                vec.push_back(arr[mid]);
                ispresent = 1;
                break;
            }
            else if(arr[mid]<x)
                start = mid+1;
            else
                end = mid-1;
        }
    }

    if(ispresent == 0) {
        vec.push_back(-1);
        vec.push_back(-1);
    }

    for(int ve : vec) {
        cout<<ve<<" ";
    }
}