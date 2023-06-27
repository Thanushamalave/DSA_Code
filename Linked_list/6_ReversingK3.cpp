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
void inserting(Node* &head,int val){
    
    Node* n=new Node(val);
    if(head==NULL){
        head=n;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
Node* reversing(Node* &head,int k){
    Node* prev=NULL;
    Node* curr=head;
    Node* next;
    int count=0;

    while(curr!=NULL && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next!=NULL){
        head->next= reversing(next,k);
    }
    return prev;
}
void display(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head=NULL;
    inserting(head,1);
    inserting(head,2);
    inserting(head,0);
    inserting(head,5);
    inserting(head,3);
    inserting(head,4);
    display(head);
    Node* rev=reversing(head,3);
    display(rev);
}