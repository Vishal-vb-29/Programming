#include<iostream>
#include<vector>
using namespace std;
int oddOccurence(vector<int> arr)
{
int s=0,e=arr.size()-1,mid=s+(e-s)/2;
while(s<=e)
{
if(s==e) return s;
if(mid%2==0)
{
if(arr[mid]==arr[mid+1]) s=mid+2;
else e=mid;
}
else
{
if(arr[mid]==arr[mid-1]) s=mid+1;
else e=mid-1;
}
mid=s+(e-s)/2;
}
return -1;
}
int main()
{
vector<int> arr{1,1,2,2,3,3,5,5,4,4,7,8,8};
int ans=oddOccurence(arr);
if(ans==-1){
cout<<"Element not found";
return 0;
}
cout<<"Element is "<<arr[ans]<<" at index "<<ans;
return 0;
}