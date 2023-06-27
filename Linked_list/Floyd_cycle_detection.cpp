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
// bool isCircular(Node* &head){
//     Node* temp=head;
//     while(temp->next!=head){
//         if(temp->next==NULL){
//             return false;
//         }
//         temp=temp->next;
//     }
//     if(temp->next==head){
//         return true;
//     }
// }
Node* floydCycle(Node* &head){
    if(head==NULL){
        return NULL;
    }
    Node* slow=head;
    Node* fast=head;

    while(slow!=NULL && fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return slow;
        }
        
    }
    return NULL;
}
Node* circularNode(Node* &head){
    if(head==NULL){
        return 0;
    }
    Node* x=floydCycle(head);
    Node* slow=head;
    while(slow!=x){
        slow=slow->next;
        x=x->next;
    }
    return slow;
}
void removeLoop(Node* &head){
    if(head==NULL){
        return;
    }
    Node* startNode=circularNode(head);
    Node* temp=startNode;
    while(temp->next!=startNode){
        temp=temp->next;
    }
    temp->next=NULL;
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
    insertAtHead(head,4);
    insertAtHead(head,5);
    insertAtHead(head,6);

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
 
    temp->next = head;
    // display(head);
    
    
    // cout<<startNode->data;
    removeLoop(head);
    display(head);
}