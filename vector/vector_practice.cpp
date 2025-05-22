#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int>v; // declare vector

    v.push_back(10); //push value in last in vector
    v.push_back(20);
    v.push_back(30);

    cout<<"Size of vector v : "<<v.size()<<endl; // size of vector
    cout<<"Capacity of vector v : "<<v.capacity()<<endl; //capacity of vector

    vector<int>v1(5); 

    cout<<"Size of vector v1 : "<<v1.size()<<endl;

    vector<int>v2(7, 10); // give size and default value 10 in entire array

    for(int i=0; i<v2.size(); i++) { //print vector method 1
        cout<<v2[i]<<" ";
    }
    cout<<endl;

    for(auto it = v2.begin(); it != v2.end(); it++) { // print vector method 2
        cout<<*it<<" ";
    }
    cout<<endl;

    for(auto v : v2) { // print vector method 3
        cout<<v<<" "; 
    }
    cout<<endl;

    vector<int>v3 = {1, 2, 3, 4, 5}; //initialize vector

    for(auto v : v3) {
        cout<<v<<" ";
    }
    cout<<endl;

    // input from user

    int n;
    cout<<"Enter the size : ";
    cin>>n;

    vector<int>v4(n); 

    for(int i=0; i<n; i++) { 
        cin>>v4[i];
    }

    for(int i=0; i<v4.size(); i++) { 
        cout<<v4[i]<<" ";
    }
    cout<<endl;

    // remove value from vector

    vector<int>v5;
    v5.push_back(10);
    v5.push_back(20);
    v5.push_back(30);
    v5.push_back(40);
    v5.push_back(50);

    v5.pop_back();

    for(auto v : v5) {
        cout<<v<<" ";
    }
    cout<<endl;

    v5.erase(v5.begin()+1);

    for(auto v : v5) {
        cout<<v<<" ";
    }
    cout<<endl;

    v5.clear();
    
    for(auto v : v5) {
        cout<<v<<" ";
    }
    cout<<endl;


}