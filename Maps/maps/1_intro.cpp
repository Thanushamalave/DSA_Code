#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int ,int> m;
    m.insert({1,123});
    m[3]=234;
    m[2]=134;
    m[5]=67;
    for(auto &i: m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    // map<int,int> :: iterator it;
    m.erase(2);
    auto it=m.find(4);
    if(it==m.end()){
        cout<<"No element"<<endl;
    }else{
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    for (auto it = m.begin();it != m.end(); ++it){
        cout<<it->first<<" "<<it->second<<endl;
    }
}