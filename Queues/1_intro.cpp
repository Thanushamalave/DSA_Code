#include<iostream>
using namespace std;
class Queue{
    int *arr;
    int front;
    int back;
    int size;
    public:
    Queue(){
        arr=new int[size];
        front=-1;
        back=-1;
    }

    void push(int val){
        if(back==size-1){
            cout<<"overflow";
            return;
        }
        back++;
        arr[back]=val;

        if(front==-1){
            front++;
        }
    }
    void pop(){
        if(front==-1 || front>back){
            cout<<"Underflow";
            return;
        }
        front++;
    }
    int peek(){
        if(front==-1){
            cout<<"No element is there in the queue";
            return -1;
        }
        int res=arr[front];
        return res;
    }
};
int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();

}