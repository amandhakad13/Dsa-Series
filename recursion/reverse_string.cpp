#include<iostream>
using namespace std;

void stringRev(string &str, int start, int end) {
    if(start>=end)
        return;
    
    char c = str[start];
    str[start] = str[end];
    str[end] = c;

    stringRev(str, start+1, end-1);
}

int main() {
    string str = "vijay";
    stringRev(str, 0, 4);
    cout<<str;
}