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
void deletion(Node* &head,int target){
    Node* n = new Node(target);
    Node* temp=head;
    if(temp->data==target){
        
        while(temp->next!=head){
            temp=temp->next;
        }
        Node* toDe=head;
        temp->next=head->next;
        head=head->next;
        delete toDe;
        return;
    }

    while(temp->next->data!=target){
        temp=temp->next;
    }
    Node* toDelete=temp->next;
    temp->next=temp->next->next;
    delete toDelete;
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
int main(){
    Node* head=NULL;
    insertAtHead(head,1);
    insert(head,2);
    insert(head,4);
    insert(head,3);
    display(head);
    int target;
    cin>>target;
    deletion(head,target);
    display(head);
}