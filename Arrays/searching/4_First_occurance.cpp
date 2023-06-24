#include<iostream>
using namespace std;
int firstOccurence(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int ans=-1;
    while(s<=e){
        int mid=e+s/2;
        if(key==arr[mid]){
            ans=mid;
            e=mid-1;
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}
int main(){
    int arr[6]={1,2,3,3,3,10};
    int size=6;
    int key;
    cin>>key;
    int result=firstOccurence(arr,size,key);
    cout<<result;
}