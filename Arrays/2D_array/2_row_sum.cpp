#include<iostream>
#include<climits>
using namespace std;
void rowSum(int arr[][4],int row,int col){
    int max=INT_MIN;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            
            // cout<<arr[i][j]<<" ";
            sum+=arr[i][j];
            
        }
        cout<<sum<<endl;
        if(sum>max){
            max=sum;
        }
    }
    cout<<"Max sum in row  "<<max;
}
int main(){
    // int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int arr[3][4]={
                    {1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12}
                };
    rowSum(arr,3,4);
}