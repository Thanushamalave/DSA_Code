#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(1);
    // s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    for(auto i: s){
        cout<<i<<" ";
    }cout<<endl;
    // s.erase(2);
    for(auto i: s){
        cout<<i<<" ";
    }cout<<endl;
    // cout<<*s.lower_bound(3)<<endl;
    // cout<<*s.lower_bound(2)<<endl;
    // cout<<*s.lower_bound(4)<<endl;
    // cout<<*s.lower_bound(5)<<endl;
    // cout<<*s.upper_bound(5)<<endl;
    // cout<<*s.upper_bound(2)<<endl;
    // cout<<*s.upper_bound(1)<<endl;
    // cout<<*s.upper_bound(3)<<endl;

}