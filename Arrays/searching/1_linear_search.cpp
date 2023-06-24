#include<iostream>
using namespace std;
bool linearSearch(int arr[],int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[7]={2,4,7,6,45,3,43};
    int size=7;
    int key;
    cin>>key;
    bool result=linearSearch(arr,size,key);
    if(result){
        cout<<"Element is present in the key";
    }else{
        cout<<"Element is not present in the key";
    }
}