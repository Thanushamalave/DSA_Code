#include<iostream>
using namespace std;
bool happyNumber(int num){
    int sum=0;
    do{
        int rem=num%10;
        num=num/10;
        sum+=rem*rem;
    }while(num!=0);
    if(sum==1){
        return true;
    }
    happyNumber(sum);
    // return false;

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