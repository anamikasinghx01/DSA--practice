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
    void push_back(int val){
        node* newNode = new node(val);
        if(head==NULL){
            head = tail = newNode;
        }else{
          tail->next = newNode;
          tail = newNode;
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
    void reverse(){
        jj
    }
};
int main(){
    list ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
     ll.push_back(4);
    ll.print();
    return 0;
}