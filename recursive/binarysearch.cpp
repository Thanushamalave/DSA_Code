#include<iostream>
using namespace std;
bool binarysearch(int arr[],int key,int s,int e){
    int mid=s+e/2;
    if(arr[mid]==key){
        return true;
    }
    if(s>e){
        return false;
    }
    if(arr[mid]>key){
        binarysearch(arr,key,s,mid-1);
    }else{
        binarysearch(arr,key,mid+1,e);
    }
}
int main(){
    int arr[5]={2,4,7,9,10};
    int key=7;
    cout<<binarysearch(arr,key,0,4);
}