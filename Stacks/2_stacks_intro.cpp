#include<iostream>
using namespace std;

class Stack{
    int* arr;
    int size;
    int top;
    public:
    Stack(){
        arr=new int[size];
        top=-1;
    }
    void push(int val){
        if(top==size-1){
            cout<<"stack is overflow";
            return;
        }

        top++;
        arr[top]=val;
    }

    void pop(){
        if(top==-1){
            cout<<"Underflow";
            return;
        }
        cout<<char(arr[top]);
        top--;
    }
    int Top(){
        if(top==-1){
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        if(top==-1){
            return true;
        }
        return false;
    }
};
int main(){
    Stack s;
    string s1="Thanusha is good girl.";
    string s2=s1.split(" ");
    // for(int i=0;i<s1.length();i++){
    //     s.push(s1[i]);
    // }
    // for(int i=0;i<s1.length();i++){
    //     s.pop();
    // }
    cout<<s2[0];
    
}