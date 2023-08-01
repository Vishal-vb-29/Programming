#include<iostream>
using namespace std;
void transpose(int arr[][3],int row,int col,int transposearr[][3])
{
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
transposearr[j][i]=arr[i][j];
}
}
int main()
{
int transposearr[3][3];
int arr[3][3]={{1,2,3},{6,5,4},{7,8,9}};
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++) cout<<arr[i][j]<<" ";
cout<<endl;
}
transpose(arr,3,3,transposearr);
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++) cout<<transposearr[i][j]<<" ";
cout<<endl;
}
return 0;
}