#include<iostream>
#include<vector>
using namespace std;
int firstoccurence(vector<int> arr,int target)
{
int ans=-1,start=0;
int end=arr.size()-1;
int mid =start+(end-start)/2;
while(start<=end){
int element=arr[mid];
if(element==target)
{
ans=mid;
end=mid-1;
}
else if(target<element) end=mid-1;
else start=mid+1;
mid=start+(end-start)/2;   //mid=start+(end-start)/2
}
return ans;
}
int lastoccurence(vector<int> arr,int target)
{
int ans=-1,start=0;
int end=arr.size()-1;
int mid =start+(end-start)/2;
while(start<=end){
int element=arr[mid];
if(element==target)
{
ans=mid;
start=mid+1;
}
else if(target<element) end=mid-1;
else start=mid+1;
mid=start+(end-start)/2;   //mid=start+(end-start)/2
}
return ans;
}
int main()
{
int size,target;
cout<<"Enter size";
cin>>size;
vector<int> arr(size);
for(int i=0;i<size;i++) 
{
cout<<"Enter number :";
cin>>arr[i];
}
cout<<"Enter target:";
cin>>target;
int fo=firstoccurence(arr,target);
cout<<"First Occurence of "<<target<<" is at "<<fo<<" index"<<endl;
int lo=lastoccurence(arr,target);
cout<<"Last Occurence of "<<target<<" is at "<<lo<<" index"<<lo<<endl;
int to=lo-fo+1;
cout<<to;
return 0;
}