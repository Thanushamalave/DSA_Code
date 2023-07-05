#include<iostream>
#include<queue>
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
Node* insertBST(Node* root,int val){
    if(root==NULL){
        return new Node(val);
    }
    if(root->data>val){
        root->left=insertBST(root->left,val);
    }
    if(root->data<val){
        root->right=insertBST(root->right,val);
    }
    return root;
}
bool searchBst(Node* root,int val){
    if(root==NULL){
        return false;
    }
    if(root->data==val){
        return true;
    }
    if(root->data<val){
        return searchBst(root->right,val);
    }

    if(root->data>val){
        return searchBst(root->left,val);
    }
}
int main(){
    Node* root=NULL;
    root=insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);
    if(searchBst(root,10)){
        cout<<"yes";
    }else{
        cout<<"No";
    }
}