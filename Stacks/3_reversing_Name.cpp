#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<char> s;
    string s1="Thanusha is a good girl.";
    string s2=s1.s
    for(int i=0;i<s1.length();i++){
        char ch=s1[i];
        s.push(ch);
    }
    string ans="";
    for(int i=0;i<s1.length();i++){
        char ch=s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout<<ans;
}