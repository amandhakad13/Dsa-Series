#include<iostream>
#include <vector>
using namespace std;

bool divideSubArray(vector<int>arr) {
    int prifix = 0, total = 0, n = arr.size();

    for(int i=0; i<n; i++) {
        total = total+arr[i];
    }

    for(int i=0; i<n-1; i++) {
        prifix = prifix+arr[i];
        int ans = total-prifix;
        if(ans == prifix) {
            return 1;
        }
    }

    return 0;
}

int main(){
    int n;
    cout<<"Enter the size : ";
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }    

    int res = divideSubArray(arr);

    if(res==1) {
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }
} 
