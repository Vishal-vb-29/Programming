#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int> arr,int target){
int start=0;
int end=arr.size()-1;
int mid =start+(end-start)/2;
while(start<=end){
int element=arr[mid];
if(element==target) return mid;
else if(target<element) end=mid-1;
else start=mid+1;
mid=start+(end-start)/2;   //mid=start+(end-start)/2
}
return -1;
}

int main()
{
vector<int> arr;
int size,target,n;
cout<<"Enter size: ";
cin>>size;
for(int i=0;i<size;i++) 
{
    cout<<"Enter number : ";
    cin>>n;
	arr.push_back(n);
}
cout<<"Enter your target :";
cin>>target;
int bs=binarysearch(arr,target);
if(bs) cout<<"Element found at index : "<<bs;
else cout<<"Element not found";
return 0;
}