#include<iostream>
using namespace std;

//logic  

void printarray(int arr[],int size)
{
for(int i=0;i<size;i++)
cout<<arr[i]<<" ";
}
int* swap(int arr[],int size)
{
for(int i=0;i<size;i+=2)
{
if (i+1<size) {
int a=arr[i];
arr[i]=arr[i+1];         //swap(arr[i],arr[i+1]);
arr[i+1]=a;
}
else break;
}
return arr; 
}



//Main function

int main()
{
int size;
cout<<"Enter a size :";
cin>>size;
int arr[20];
for(int i=0;i<size;i++)
{
cout<<"Enter a element :";
cin>>arr[i];
}
swap(arr,size);
printarray(arr,size);
return 0;
}