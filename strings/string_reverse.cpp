#include<iostream>
using namespace std;
bool palindrom(string s1){
    // string s=reverse(s1);
    // for(int i=0;i<s1.length()/2;i++){
    //     if(s1[i]!=s1[s1.length()-i-1]){
    //         return false;
    //     }
    // }
    int s=0;
    int e=s1.length()-1;
    while(s<=e){
        if(s1[s]==s1[e]){
            s++;
            e--;
        }else{
            return false;
        }
    }
    return true;
}
string reverse(string s1){
    for(int i=s1.length()-1;i>=0;i--){
        cout<<s1[i];
    }
}
int main(){
    string s1="asdfFdsa";
    string s=tolower(s1);
    // reverse(s1);
    // reversing the string
    // for(int i=s1.length()-1;i>=0;i--){
    //     cout<<s1[i];
    // }

    bool result=palindrom(s1);
    if(result){
        cout<<"palidrom";
    }else{
        cout<<"not";
    }
}
