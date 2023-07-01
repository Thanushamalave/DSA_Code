#include <iostream>
#include<stack>
using namespace std;
class circular
{
    int *arr;
    int front;
    int rear;
    int size;

public:
    circular(){
        arr = new int[size];
        front = rear = -1;
    }
    void enqueue(int val)
    {
        if (front == 0 && rear == size - 1)
        {
            return;
        }
        else if (front == -1)
        {
            front = rear = 0;
            arr[front] = val;
        }
        else if (front != 0 && rear == size - 1)
        {
            rear = 0;
            arr[rear] = val;
        }
        else
        {
            rear++;
            arr[rear] = val;
        }
    }
    int dequeue()
    {
        if (front == -1)
        {
            cout << "No elements in queue";
             return -1;
        }
        int data = arr[front];

        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if (front == size - 1)
            front = 0;
        else
            front++;
        return data;
    }
    // void reverse()
    // {
    //     if(front==-1){
    //         return;
    //     }
    //     int data = dequeue();
    //     reverse();
    //     enqueue(data);
    // }
    queue<int> reverse(queue<int> q){
        stack<int> s;
        while(!q.empty()){
            int element=q.front();
            q.pop();
            s.push(element);
        }
        while(!s.empty()){
            int element=s.top();
            s.pop();
            q.push(element);
        }
        return q;
    }
    void display()
    {
        if (front == -1)
        {
            cout << "Queue is Empty";
            return;
        }

        if (rear >= front)
        {
            for (int i = front; i <= rear; i++)
                cout << arr[i]<<" ";
        }
        else
        {
            for (int i = front; i < size; i++)
                cout << arr[i]<<" ";

            for (int i = 0; i <= rear; i++)
                cout << arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    circular q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.display();
    reverse(q);
    
    q.display();
}