#include<iostream>
#include<stack>
using namespace std;

bool matching(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(s[i]=='['||s[i]=='('||s[i]=='{'){
            st.push(ch);
        }
        else if(!st.empty() && ((ch==']' && st.top()=='[')||(ch==')' && st.top()=='(')||(ch=='}' && st.top()=='{'))){
            st.pop();
        }
        else{
            return false;
        }
    }
    if(st.empty()){
        return true;
    }
    return false;
}
int main(){
    string s="[]{}(()))";
    if(matching(s)){
        cout<<"balanced";
    }else{
        cout<<"Not balanced";
    }
    
}