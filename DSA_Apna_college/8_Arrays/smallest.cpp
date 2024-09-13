// Find smallest/largest in Array

#include<Iostream>
#include<limits.h>
using namespace std;

int smallest(int arr[],int sz){
    int small = INT_MAX;
    for(int i=0;i<sz;i++){
        if(arr[i]<small) small=arr[i];
        // small=min(nums[i],smallest);
    }
    return small;
}

int main(){
    int arr[10];
    int sz=sizeof(arr)/sizeof(int);
    cout<<"Enter 10 values : ";
    for(int i=0;i<sz;i++) cin>>arr[i];
    int small=smallest(arr,sz);
    cout<<"Smallest element is  : "<<small;
    return 0;
}