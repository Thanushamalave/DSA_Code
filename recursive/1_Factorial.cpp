#include<iostream>
using namespace std;
int factorial(int c){
    if(c==0){
        return 1;
    }
    int res=c*factorial(c-1);
    return res;
}
int main(){
    int c;
    cin>>c;
    cout<<factorial(c);
}