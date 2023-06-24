#include<iostream>
#include<climits>
using namespace std;
void wavePrint(int arr[][4],int row,int col){
    for(int i=0;i<col;i++){
        if(i%2==0){
            for(int j=0;j<row;j++){
                cout<<arr[j][i]<<" ";
            }
            cout<<endl;
        }else{
            for(int j=row-1;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }
            cout<<endl;
        }
    }
}
int main(){
    // int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int arr[3][4]={
                    {1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12}
                };
    wavePrint(arr,3,4);
}