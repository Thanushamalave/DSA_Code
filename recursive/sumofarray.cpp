#include<iostream>
using namespace std;
int sum=0;
int sumOfArray(int arr[],int size){
    
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    else{
        sum+=arr[0];
        cout<<sum<<endl;
        sumOfArray(arr+1,size-1);
    }
}
int main(){
    int arr[5]={2, 4, 12, 7,10};
    int size=5;
    cout<<sumOfArray(arr,5);
}