#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;
    string s1="apple a day keeps the doctor away";
    string ans="";
    cout<<s1<<endl;
    for(int i=0;i<s1.length();i++){

        // if(s1[i]==' ' && i<=s1.length()-1){
        //     s.push(ans);
        //     ans="";
        // }
        // ans+=s1[i];
        string word="";
        while(s1[i]!=' ' && i<s1.length()){
            word+=s1[i];
            i++;
        }
        s.push(word);
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    
}