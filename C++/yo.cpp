#include<iostream>
using namespace std;
int FirstOcc(int arr[],int n,int key)
{
 int s=0,e=n-1;
 int mid = s+(e-s)/2;
 int ans = -1;
 while(e<=e)
 {
  if(arr[mid]==key)
   {
    ans = mid;
    e=mid-1;
   }
   else if(key>arr[mid])
   {
    s=mid+1;
   }
   else if(key<arr[mid])
   {
    e=mid-1;
   }
  mid=s+(e-s)/2;
 }
return ans;
}
int LastOcc(int arr[],int n,int key)
{
 int s=0,e=n-1;
 int mid = s+(e-s)/2;
 int ans = -1;
 while(e<=e)
 {
  if(arr[mid]==key)
   {
    ans = mid;
    s=mid+1;
   }
   else if(key>arr[mid])
   {
    s=mid+1;
   }
   else if(key<arr[mid])
   {
    e=mid-1;
   }
  mid=s+(e-s)/2;
 }
return ans;
}
int main()
{
int Arr[5]={1,2,3,4,3};
int F=FirstOcc(Arr,5,3);
int L=LastOcc(Arr,5,3);
 cout<<"first occurence :"<<F;
 cout<<"last occurence:"<<L;

return 0;
}