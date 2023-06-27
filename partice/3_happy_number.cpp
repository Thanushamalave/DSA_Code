#include<iostream>
using namespace std;
bool happyNumber(int num){
    int sum=0;
    while(num!=0){
        int rem=num%10;
        num=num/10;
        sum+=rem*rem;
    }
    if(sum==1){
        return true;
    }
    happyNumber(sum);
    return false;
// return sum;
}
int main(){
    int num;
    cin>>num;
   if(happyNumber(num)){
    cout<<"true";
   }else{
    cout<<"false";
   }
}