// #include<iostream>
// using namespace std;
// int peakelement(int arr[] , int size){
//     int s=0;
//     int e=size-1;
//     int ans=-1;
//     while(s<e){
//         int mid=s+e/2;
//         if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]){
//             ans=mid;
//             s=mid+1;
//         }
//         if(arr[mid-1]>arr[mid]){
//             e=mid-1;
//         }else{
//             s=mid+1;
//         }
//     }
//     return ans;
// }
// int main(){
//     int arr[4]={2,5,10,4};
//     int size=4;
//     int result=peakelement(arr,size);
//     cout<<result;
// }
#include<iostream>
using namespace std;
int peakelement(int arr[] ,int size){
    int s=0;
    int e=size-1;
    int mid;
    while(s<e){
        mid=s+(e-s)/2;
        if(arr[mid+1]>arr[mid]){
            s=mid+1;
        }else{
            e=mid;
        }
    }
    return mid;
}
int main(){
    int arr[4]={2,5,10,4};
    int size=4;
    // cout<<size;
    int result=peakelement(arr,size);
    cout<<arr[result];
}