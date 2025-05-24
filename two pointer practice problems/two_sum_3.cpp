#include<iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int start = 0, end = numbers.size()-1;
    vector<int>res;

    while(start<end) {
        if(numbers[start]+numbers[end]==target) {
            res.push_back(numbers[start]);
            res.push_back(numbers[end]);
            return res;
        }
        else if(numbers[start]+numbers[end]<target) {
            start++;
        }
        else {
            end--;
        }
    }

    return res;
}
 
int main() {
    vector<int>arr = {2, 7, 11, 15, 27};
    vector<int>ans;
    int target = 42;

    ans = twoSum(arr, target);

    for(int i=0; i<ans.size(); i++) {
        cout<<ans[i]<<" ";
    }
}