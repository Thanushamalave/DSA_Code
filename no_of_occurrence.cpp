// #include <iostream>
// using namespace std;

// int main()
// {
//     int num[7]={1,2,3,3,3,3,5};
//     int i=0,j=6;
//     for(;i<7;i++){
//         if(num[i]==3){
//             break;
//         }
//     }
//     for(;j>0;j--){
//         if(num[j]==3){
//             break;
//         }
//     }
//     cout<<j-i+1;
// }

#include<iostream>
using namespace std;
int firstoc(int arr[],int size,int key){
    int low=0;
    int high=size-1;
    int mid=low+(high-1)/2;
    int ans=-1;
    while(low<=high){
        if(arr[mid]==key){
            ans=mid;
            high=high-1;
        }
        else if(arr[mid]>key){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        mid=low+(high+1)/2;
    }
    return ans;
}
int main(){
    int arr[6]={1,2,3,3,3,5};
    cout<<firstoc(arr,6,3);

}