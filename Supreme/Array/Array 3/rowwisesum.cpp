#include<iostream>
using namespace std;
void printRowWiseSum(int [][4],int rows,int cols);
int main()
{
int arr[5][4]={{1,2,3,4},{2,3,4,1},{5,6,1,3},{2,4,1,8},{1,9,9,6}};
printRowWiseSum   (arr,5,4);
return 0;
}
void printRowWiseSum(int arr[][4],int rows ,int cols)
{
for(int i=0;i<rows;i++)
{
int sum=0;
for(int j=0;j<cols;j++)
sum=sum+arr[i][j];
cout<<sum<<endl;
}
}