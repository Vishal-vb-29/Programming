#include<iostream>
using namespace std;

void printRowSum(int arr[3][3],int rows,int cols){
    for(int i=0;i<rows;i++){
        int sum=0;
        for(int j=0;j<cols;j++) sum=sum+arr[j][i];
        cout<<"Col "<<i<<" sum is : "<<sum<<endl;
    }
}
int main(){
 int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
 int rows=3;
 int cols=3;
 printRowSum(arr,rows,cols);
 return 0;
}