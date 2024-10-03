// Search in roated sorted array
#include<iostream>
#include<vector>
using namespace std;

int srchInRotaSort(vector<int> &nums,int tar){
    int st=0,end=nums.size()-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(nums[mid]==tar) return mid;
        if(nums[st]<=nums[mid]){
            if(nums[st]<=tar && tar<=nums[end]) end=mid-1; 
            else st=mid+1;
        }
        else{
            if(nums[st]<=tar && tar<=nums[end]) st=mid+1;
            else end=mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr={3,4,5,6,7,0,1,2};
    int tar;
    cout<<"Enter a target {3,4,5,6,7,0,1,2} : ";
    cin>>tar;
    cout<<srchInRotaSort(arr,tar);
}