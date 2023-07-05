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
int maxHeight(Node* root){
    if(root==NULL){
        return 0;
    }
    int left=maxHeight(root->left);
    int right=maxHeight(root->right);
    return max(left,right)+1;

}
int calDiameter(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftHeight=maxHeight(root->left);
    int rightHeight=maxHeight(root->right);
    int currDiameter=leftHeight+rightHeight+1;

    int lDiameter=calDiameter(root->left);
    int rDiameter=calDiameter(root->right);
    return max(currDiameter,max(lDiameter,rDiameter));
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
    cout<<calDiameter(root);
}