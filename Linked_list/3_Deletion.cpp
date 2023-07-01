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
void insertAtTail(Node* &head,int val){
    // creat a new node in which data is filled and next will point at null
    Node* n=new Node(val); //->dynamicLLY creating the node;

    // if head is null
    if(head == NULL){
        head = n;
        return;
    }

    // some elements are there in linked list
    Node* temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next = n;

}
void insertAtHead(Node* &head,int val){
    Node* n=new Node(val);

    if(head==NULL){
        head=n;
        return;
    }

    n->next=head;
    head=n;

}
void deletion(Node* &head,int target){
    //CASE1:: when there are no nodes in the linkedlist
    if(head==NULL){
        return;
    }
    // CASE2:: when element is in head
    
    Node* temp=head;
    if(temp->data==target){
      
   head= head->next;
   delete temp;
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
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node* head=NULL;

    insertAtTail(head,1);
    insertAtTail(head,2);
    
    insertAtHead(head,3);
    insertAtHead(head,7);
    insertAtHead(head,4);

    int target;
    cin>>target;
    display(head);
    deletion(head,target);
    
    display(head);
}