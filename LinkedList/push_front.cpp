#include <iostream>
using namespace std;
class node {
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
class list{
    node* head;
    node* tail;
    public:
    list(){
        head = NULL;
        tail = NULL;
    }
    void push_front(int val){
        node* newNode = new node(val);
        if(head==NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }
    void print(){
        node* temp = head;
        while(temp!=NULL){
            cout << temp->data <<"->";
            temp = temp->next;
        }
        cout << "NULL\n" << endl;
    }
};
int main(){
    list ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.print();
    return 0;
}