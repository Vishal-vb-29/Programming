#include<iostream>
using namespace std;
int main()
{
int arr[10];
for(int i=0;i<10;i++)
{
cout<<"Enter a element :";
cin>>arr[i];
}
int st=arr[0];
for(int i=0;i<9;i++)
{
int temp=arr[i+1];
arr[i+1]=arr[i];
arr[i]=temp;
}
for(int i=0;i<10;i++) cout<<arr[i]<<" ";
return 0;
}
