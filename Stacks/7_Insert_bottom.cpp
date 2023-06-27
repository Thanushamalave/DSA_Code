#include<iostream>
#include<stack>
using namespace std;

// void insertAtBottom(stack<int> &st,int elem){
//     if(st.empty()){
//         st.push(elem);
//         return;
//     }
//     int num=st.top();
//     st.pop();
//     insertAtBottom(st,elem);
//     st.push(num);
// }

// int main(){
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     st.push(5);
//     while(!st.empty()){
//         cout<<st.top()<<" ";
//         st.pop();
//     }
//     int elem=9;
//     // cin>>elem;
    
//     insertAtBottom(st,elem);

//     cout<<"size: "<<st.size()<<endl;
//     while(!st.empty()){
//         cout<<st.top()<<" ";
//         st.pop();
//     }
// }

void insertAtBottom(stack<int> &st,int elem){
if(st.empty()){
st.push(elem);
return;
}
int num=st.top();
st.pop();
insertAtBottom(st,elem);
st.push(num);
}

int main(){
stack<int> s;

s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
s.push(6);
s.push(7);


int size = s.size();
int element = 8;
insertAtBottom(s, element);
// deleteMiddle(s,0,size);

cout << "After deletion " << endl;
while(!s.empty()){
cout << s.top() << " ";
s.pop();
}
cout << endl;

}