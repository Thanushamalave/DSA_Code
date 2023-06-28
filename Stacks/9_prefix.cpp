#include<iostream>
#include<stack>
#include<string>
#include <stdlib.h>
using namespace std;

void prefix(string s){
    stack<int> st;
    for(int i=s.length()-1;i>=0;i--){
        
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }else{
            int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();
            int res;
            switch (s[i])
            {
            case '+':
                res=op1+op2;
                break;
            
            case '-':
                res=op1-op2;
                break;
            
            case '*':
                res=op1*op2;
                break;
            
            case '/':
                res=op1/op2;
                break;
            
            case '^':
                res=op1^op2;
                break;
        }
        st.push(res);
    }
    
}
cout<<st.top()<<endl;
}
int main(){
    string s="+*423";
    prefix(s);

}