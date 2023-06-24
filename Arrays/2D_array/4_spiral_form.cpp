#include<iostream>
#include<climits>
using namespace std;
void spiralPrint(int arr[][4],int row,int col){
    int leftcol=0;
    int rightcol=col-1;
    int toprow=0;
    int bottomrow=row-1;
    
}
int main(){
    // int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int arr[3][4]={
                    {1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12}
                };
    spiralPrint(arr,3,4);
}