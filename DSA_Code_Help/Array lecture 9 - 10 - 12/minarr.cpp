#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void min(int arr[],int size)
{
int min=INT_MAX;
for(int i=0;i<size;i++)
{
if(arr[i]<min) min=arr[i];
}
cout<<min;
}

int main()
{
int size,arr[10];
cout<<"Enter a size of array you required :";
cin>>size;
for(int i=0;i<size;i++)
{
cout<<"Enter element :";
cin>>arr[i];
}
min(arr,size);
return 0;
}