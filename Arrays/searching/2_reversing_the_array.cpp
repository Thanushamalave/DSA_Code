#include<iostream>
using namespace std;
void reverse(int arr[],int s,int e){
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
int main(){
    int arr[7]={2,4,7,6,45,3,43};
    int size=7;
    reverse(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}