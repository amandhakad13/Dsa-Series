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
    Head = NULL;

    int arr[] = {2,4,6,8,10};

    for(int i=0; i<5; i++) {
        if(Head == NULL) {
            Head = new NODE(arr[i]);
            Tail = Head;
        }
        else {
            while(Tail->next!=NULL) {
                Tail = Tail->next;
            }
            Tail->next = new NODE(arr[i]);
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