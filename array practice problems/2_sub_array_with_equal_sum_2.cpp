#include<iostream>
#include <vector>
using namespace std;

bool divideSubArray(vector<int>arr) {
    int n = arr.size();

    for(int i=0; i<n-1; i++) {
        int sum1 = 0, sum2 = 0;
        for(int j=0; j<=i; j++) {
            sum1 = sum1+arr[j];
        }
        for(int k=i+1; k<n; k++) {
            sum2 = sum2+arr[k];
        }
        if(sum1==sum2) {
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
