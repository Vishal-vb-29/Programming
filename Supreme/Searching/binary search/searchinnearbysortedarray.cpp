#include<iostream>
#include<vector>
using namespace std;
int searchInNearbySortedArray(vector<int>& arr,int target)
{
int start=0;
int end=arr.size()-1;
int mid=start+(end-start)/2;
while(start<=end)
{
if(arr[mid]==target) return mid;
if(mid-1>=0 && arr[mid-1]==target) return mid-1;
if(mid+1<=arr.size() && arr[mid+1]==target) return mid+1;
if(target>arr[mid]) start=mid+2 ;
else end=mid-2;
mid=start+(end-start)/2;
}
return -1;
}


int main()
{
int target;
vector<int> arr{10,20,3,40,50,60,70};
cout<<"Enter target :";
cin>>target;
int ans=searchInNearbySortedArray(arr,target);
cout<<"Element "<<arr[ans]<<" is at"<<ans;
return 0;
}
