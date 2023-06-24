#include<iostream>
using namespace std;
void insertionSort(int arr[],int size){
    for(int i=1;i<size;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(temp<arr[j]){
                // shifting 
                arr[j+1]=arr[j];
            }else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
int main(){
    int arr[7]={10,1,7,4,8,2,11};
    int size=7;
    insertionSort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}