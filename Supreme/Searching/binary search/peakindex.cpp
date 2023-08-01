#include<iostream>
#include<vector>
using namespace std;
int findPeakInMountainArray(vector<int>& arr)
{
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]) start=mid+1;
        else end=mid;
        mid=start+(end-start)/2;
    }
    return start;
}
int main()
{
    vector<int>arr;
    int size,n;
    cout<<"Enter size :";
    cin>>size;
    for(int i=0;i<=size;i++) 
    {
        cout<<"Enter element :";
        cin>>n;
        arr.push_back(n);
    }
    cout<<"Peak element is "<<findPeakInMountainArray(arr);
    return 0;
}