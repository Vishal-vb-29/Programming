#include<iostream>
using namespace std;
int main()
{
int arr[]={1,2,3,3,5,6,8};
int start=0;
int ans=-1;
int count=0;
int k;
cout<<"Enter key element :";
cin>>k;
int end=8-1;
int mid=start+(end-start)/2;
while(start<=end){
if(arr[mid]==k){
++count;
ans=mid;
end=mid-1;
cout<<mid;
}
else if(arr[mid]>k) end=mid-1;
else if(arr[mid]<  k) start=mid+1;
mid=(start+end)/2;
}
}