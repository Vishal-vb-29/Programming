#include<iostream>
using namespace std;
void printColWiseSum(int [][4],int rows,int cols);
int main()
{
int arr[5][4]={{1,2,3,4},{2,3,4,1},{5,6,1,3},{2,4,1,8},{1,9,9,6}};
printColWiseSum   (arr,5,4);
return 0;
}
void printColWiseSum(int arr[][4],int rows ,int cols)
{
for(int i=0;i<cols;i++)
{
int sum=0;
for(int j=0;j<rows
;j++)
sum=sum+arr[j][i];
cout<<sum<<endl;
}
}