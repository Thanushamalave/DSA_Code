#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};
void insertAtHead(Node* &head,int val){
    Node* n=new Node(val);
    if(head==NULL){
        head=n;
        n->next=n;
        return;
    }
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    n=head;
}
void insert(Node* &head,int val){
    
    Node* n=new Node(val);
    if(head==NULL){
        head=n;
        return;
    }
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}
void display(Node* &head){
    Node* temp=head;
    while(temp->next!= head){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<temp->data<<"->";
    cout<<"NULL"<<endl;
}
bool isCircular(Node* &head){
    Node* temp=head;
    while(temp->next!=head){
        if(temp->next==NULL){
            return false;
        }
        temp=temp->next;
    }
    if(temp->next==head){
        return true;
    }
}
int main(){
    Node* head=NULL;
    insertAtHead(head,1);
    // insert(head,2);
    // insert(head,4);
    // insert(head,3);
    display(head);
    if(isCircular(head)){
        cout<<"Circular";
    }else{
        cout<<"not";
    }
}