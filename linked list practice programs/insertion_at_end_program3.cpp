#include<iostream>
using namespace std;

class NODE {
    public :
        int data;
        NODE *next;

        NODE(int value) {
            data = value;
            next = NULL;
        }
};

int main() {

    NODE *Head, *Tail;
    Tail = Head = NULL;

    int arr[] = {1,2,3,4,15,20};

    for(int i=0; i<6; i++) {
        if(Head == NULL) {
            Head = new NODE(arr[i]);
            Tail = Head;
        }
        else {
            Tail->next = new NODE(arr[i]);
            Tail = Tail->next;
        }
    }

    NODE *temp;
    temp = Head;
    while(temp!=NULL) {
        cout<<temp->data;
        if(temp->next!=NULL) {
            cout<<" -> ";
        }
        temp=temp->next;
    }
    
}