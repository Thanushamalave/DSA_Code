#include<iostream>
// #include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int size){
   for(int i=0;i<size-1;i++){
        int minIndex=i;
        for(int j=i+1;j<size;j++){
            if(arr[minIndex]>arr[j]){
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
   }
}
int main(){
    int arr[6]={4,2,6,3,9,7};
    int size=6;
    selectionSort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}