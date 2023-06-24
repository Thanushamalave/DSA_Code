#include<iostream>
using namespace std;
void bubbleSort(int arr[],int size){
    // in every increase in i the last element will get placed in right position.so the length of swaping will also decrease.
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[9]={4,2,6,3,9,7,34,1,0};
    int size=9;
    bubbleSort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
