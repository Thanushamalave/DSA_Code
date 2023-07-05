#include<iostream>
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
int search(int in[],int start,int end,int curr){
    for(int i=start;i<=end;i++){
        if(curr==in[i]){
            return i;
        }
    }
    return -1;
}
Node* BuildTree(int pre[],int in[],int start,int end){
    int idx=0;
    if(start>end) return NULL;
    int curr=pre[idx++];

    Node* node=new Node(curr);

    if(start==end) return node;

    int pos=search(in,start,end,node->data);

    node->left=BuildTree(pre,in,start,pos-1);
    node->right=BuildTree(pre,in,pos+1,end);
    return node;
}
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    int in[]={4,2,1,5,3};
    int pre[]={1,2,4,3,5};
   Node* root=BuildTree(pre,in,0,4);
    inorder(root);
}