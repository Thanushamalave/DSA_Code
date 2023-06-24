#include<iostream>
using namespace std;
bool element(int arr[],int s,int e,int target){
    while(s<=e){
        int mid=s+e/2;
        if(arr[mid]==target){
            return true;
        }
        if(arr[mid]<target){
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return false;
}
int main(){
    int arr[6]={2,3,5,7,9,10};
    int size=6;
    int target;
    cin>>target;
    element(arr,0,size-1,target);
}