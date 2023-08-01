#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void max(int arr[],int size)
{
int max=INT_MIN;
for(int i=0;i<size;i++)
{
if(arr[i]>max) max=arr[i];
}
cout<<max;
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
max(arr,size);
return 0;
}