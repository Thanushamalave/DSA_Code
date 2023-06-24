#include<iostream>
using namespace std;
bool binarysearch(int arr[],int size,int key){
    int s=0;
    int e=size-1;

    while(s<=e){
        int mid=e+s/2;
        if(key==arr[mid]){
            return true;
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return false;
}
int main(){
    int arr[6]={2,3,4,5,6,10};
    int size=6;
    int key;
    cin>>key;
    bool result=binarysearch(arr,size,key);
    if(result){
        cout<<"found";
    }else{
        cout<<"not found";
    }
}