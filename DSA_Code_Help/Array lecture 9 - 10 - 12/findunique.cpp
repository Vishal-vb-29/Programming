#include<iostream>
using namespace std;

//Logic

int findUnique(int arr[],int size)
{
int ans=0;
for (int i=0; i<size;i++)
ans=ans^arr[i];                  //2^2=0; 
return ans;
}


// Main 


int main()
{
int size;
cout<<"Enter a size :";
cin>>size;
int arr[20];
for(int i=0;i<size;i++)
{
cout<<"Enter an element :";
cin>>arr[i];
}
int a=findUnique(arr,size);
cout<<a;
return 0;
}