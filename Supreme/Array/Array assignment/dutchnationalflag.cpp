#include<iostream>
#include<algorithm>
using namespace std;
void dutchnational(int arr[],int n)
{
int l=0,h=n-1;
for(int i=0;i<n;i++)
{
if(arr[l]<0) l++;
else if (arr[h]>0) h--;
else swap(arr[l],arr[h]);
}
}
int main()
{
int arr[]={1,0,-5,-6,5,1,-8,9};
int n=sizeof(arr)/sizeof(int);
dutchnational(arr,n);
for(int i=0;i<n;i++) cout<<arr[i]<<" ";
return 0;
}