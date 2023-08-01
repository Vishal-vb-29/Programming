#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void getMin(int arr[],int size)
{
int mini=INT_MAX;
for(int i=0;i<size;i++)
{
//maxi=min(mini,num[i];  predefined function in place of if
if(arr[i]<min) min=arr[i];
}
cout<<min;
}

void getMax(int arr[],int size)
{
int maxi=INT_MIN;
for(int i=0;i<size;i++)
{
//maxi=max(maxi,num[i];  predefined function in place of if
if(arr[i]>maxi) maxi=arr[i];
}
cout<<maxi;
}

int main()
{
int size;
cout<<"Enter a size :";
cin >> size;
int arr[100];
for(int i=0;i<size;i++) cin >>arr[i];
cout<<"Maximum Value is : ";
getMax(arr , size);
cout<<endl;
cout<<"Maximum Value is : ";
getMin(arr , size);
return 0;
}