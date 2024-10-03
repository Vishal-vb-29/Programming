#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr,int tar){
    int st=0;
    int end=arr.size()-1;
    
    while(st<=end){
        int mid=(st+end)/2;
        if(arr[mid]>tar){
            end=mid-1;
        }else if(arr[mid]<tar){
            st=mid+1;
        }else return mid;
    }
    return -1;
}

int main(){
    vector<int> arr1={-1,0,3,4,5,9,12};
    vector<int> arr={-1,0,3,4,5,9};
    int tar1=12;
    cout<<binarySearch(arr1,tar1);

    return 0;
}