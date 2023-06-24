#include<iostream>
using namespace std;
int fibonacci(int c){
    if(c==2){
        return 1;
    }if(c==1){
        return 0;
    }
    int res=fibonacci(c-1)+fibonacci(c-2);
    return res;

}
int main(){
    int c;
    cin>>c;
    cout<<fibonacci(c);
}