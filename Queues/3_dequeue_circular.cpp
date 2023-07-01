#include<iostream>
using namespace std;
class circular{
    int *arr;
    int front;
    int rare;
    int size;

    circular(){
        arr=new int[size];
        front=rare=-1;
    }

    void dequeue(int val){
        if (front == -1){
        cout<<"No elements in queue"
        return ;
        }
  
    if (front == rear){
        front = -1;
        rear = -1;
    }
    else if (front == size-1)
        front = 0;
    else
        front++;
  
    }
};
int main(){

}