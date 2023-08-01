#include<iostream>
#include<vector>
using namespace std;
int findPivot(vector<int>& arr)
{
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(mid+1<arr.size() && arr[mid]<arr[mid+1]) return mid;
		if(mid-1>=0 && arr[mid-1]>arr[mid]) return mid-1;
        if(arr[start]>arr[mid]) end=mid-1;
		else start=mid;
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
    for(int i=0;i<size;i++) 
    {
        cout<<"Enter element :";
        cin>>n;
        arr.push_back(n);
    }
    cout<<"Pivot element is "<<findPivot(arr);
    return 0;
}