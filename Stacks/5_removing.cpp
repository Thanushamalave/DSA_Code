#include<iostream>
#include<stack>
using namespace std;

void removing(stack<int> &s,int count,int size){
    if(count==size){
        s.pop();
        return;
    }

    int num=s.top();
    s.pop();

    removing(s,count+1,size);

    s.push(num);
}
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    removing(s,0,3);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}