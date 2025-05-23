#include<iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {2, 7, 11, 15, 27};
    int n = 5, target = 42; 
    bool ispresent = 0;
    vector<int>vec;

    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i]+arr[j]==target) {
                vec.push_back(arr[i]);
                vec.push_back(arr[j]);
                ispresent = 1;
                break;
            }
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