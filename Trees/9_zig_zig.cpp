#include<iostream>
#include<stack>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void zigzag(Node* root){
    stack<Node*> l;
    stack<Node*> r;
    if(root==NULL){
        return;
    }
    bool leftright=true;
    
    l.push(root);
    while(!l.empty()){
        Node* temp=l.top();
        l.pop();
        if(temp){
            cout<<temp->data<<" ";
        }
        if(leftright){
            if(temp->left){
                r.push(temp->left);
            }
            if(temp->right){
                r.push(temp->right);
            }
        }else{
            
            if(temp->right){
                r.push(temp->right);
            }
            if(temp->left){
                r.push(temp->left);
            }
        }
        if(l.empty()){
            leftright=!leftright;
            swap(l,r);
        }

    }
}
int main(){
   Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->left->left=new Node(9);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    zigzag(root);
}