#include<iostream>
using namespace std;
class Queue{
    int *arr;
    int front;
    int rare;
    int size;

    Queue(){
        arr=new int[size];
        front=rare=-1;
    }

    void enqueue(int val){
        if(front==0 && rare==size-1){
            return;
        }
        else if(front==-1){
            front=rare=0;
            arr[front]=val;
        }
        else if(front!=0 && rare==size-1){
            rare=0;
            arr[rare]=val;
        }
        else{
            rare++;
            arr[rare]=val;
        }
    }
};
int main(){
    Queue q;
    
}