#include<iostream>
using namespace std;

//logic

void reverseArray(int * arr,int size)
{
for(int i=0,j=size-1;i<=j;i++,j--) 
{
int a=arr[i];
arr[i]=arr[j];
arr[j]=a;
}
for(int i=0;i<size;i++) cout<<arr[i]<<" ";
}


// main

int main()
{
int size;
cout<<"Enter a size: ";
cin>>size;
int arr[20];
for(int i=0;i<size;i++) 
{
cout<<"Enter an element : ";
cin>>arr[i];
}
reverseArray(arr,size);
return 0;
}