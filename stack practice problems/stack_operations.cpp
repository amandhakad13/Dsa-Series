#include<iostream>
using namespace std;

class Stack {
    int *arr;
    int size;
    int top;

    public:

    bool flag;

    Stack(int s) {
        size = s;
        top = -1;
        arr = new int[s];
        flag = 1;
    }

    void push(int value) {
        if(top == size-1) {
            cout<<"Stack Overflow"<<endl;
            return;
        }
        else {
            top++;
            arr[top] = value;
            cout<<"Pushed value "<<value<<" into the stack"<<endl;
            flag = 0;
        }
    }

    void pop() {
        if(top==-1) {
            cout<<"Stack Underflow"<<endl;
        }
        else {
            cout<<"Popped "<<arr[top]<<" from the stack"<<endl;
            top--;
            if(top==-1)
                flag = 1;
        }
    }

    int peek() {
        if(top==-1) {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        else {
            return arr[top];
        }
    }

    bool isEmpty() {
        return top==-1;
    }

    int isSize() {
        return top+1;
    }
};

int main() {
    Stack s(5);
    s.push(11);
    s.push(12);
    s.push(16);
    s.push(-1);

    int value = s.peek();
    if(s.flag==0)
        cout<<"Peak value of stack is : "<<value<<endl;

    s.pop();
    s.pop();
    s.pop();
    s.pop();

    int value1 = s.peek();
    if(s.flag==0)
        cout<<"Peak value of stack is : "<<value1<<endl;

}