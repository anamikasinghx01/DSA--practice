#include <iostream>
using namespace std;
class node{
    public:
    int data ;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
class list{
    public:
    node* head;
    node* tail;
    list(){
        head=NULL;
        tail=NULL;
    }
    void push_back(int val){
        node* newNode = new node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            tail->next=newNode;
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
    node* mergeTwoLists(node* ll , node* l2){
        node*p=ll;
        node*q=l2;
        node*r = new node(0);
        node* start = r;
        while(p!=NULL && q!=NULL){
        if(p->data == q->data){
            r->next = new node(p->data);
            r=r->next;
            r->next = new node(q->data);
            r=r->next;
            p=p->next;
            q=q->next;
        }else if(p->data<q->data){
            r->next = new node (p->data);
            r=r->next;
            p=p->next;
        }else{
            r->next = new node(q->data);
            r=r->next;
            q=q->next;
        }
     } 
     while(p!=NULL){
        r->next=new node(p->data);
        r=r->next;
        p=p->next;
     }
     while(q!=NULL){
        r->next = new node(q->data);
        r=r->next;
        q=q->next;
     }
       return start->next;
   }
};
int main(){
    list ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(4);
    ll.print();
    list l2;
    l2.push_back(1);
      l2.push_back(3);
        l2.push_back(4);
        l2.print();
      node* ans =  ll.mergeTwoLists( ll.head ,  l2.head);
      node* temp=ans;
      while(temp!=NULL){
        cout << temp->data <<"->";
        temp=temp->next;
      }
      cout<< "NULL\n";
    return 0;
}