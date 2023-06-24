#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int val){
        data = val;
        prev = NULL;
        next = NULL;
    }
};
void insertAtHead(Node* &head,int val){
    Node* n=new Node(val);
    if(head==NULL){
        head=n;
        return;
    }
    n->next=head;
    head->prev=n;
    head=n;
}
void insertionAtTail(Node* &head,int val){
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
    n->prev=temp;

}
void deletion(Node* &head,int target){
    if(head==NULL){
        return;
    }
    Node* temp=head;
    if(temp->data==target){
        head=head->next;
        delete temp;
        return;
    }
    while(temp->data!=target){
        temp=temp->next;
    }
    Node* toDelete=temp;
    if(temp->next==NULL)
        temp->prev->next=temp->next;
    
        temp->next->prev=temp->prev;

    temp->prev->next=temp->next;
    delete toDelete;
}
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node* head=NULL;
    insertionAtTail(head,1);
    insertionAtTail(head,2);
    insertionAtTail(head,3);
    insertAtHead(head,0);
    display(head);
    deletion(head,3);
    display(head);
}
