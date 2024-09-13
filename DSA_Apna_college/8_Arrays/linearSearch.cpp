// Linear Search


#include<iostream>
using namespace std;

int linearSearch(int *arr,int sz,int target){
    for(int i=0;i<sz;i++) {
        if(arr[i]==target)
            return i;
        }
    return -1;
}

int main(){
    int arr[10],target;
    int sz=sizeof(arr)/sizeof(int);
    cout<<"Enter 10 values : ";
    for(int i=0;i<sz;i++) cin>>arr[i];
    cout<<"Enter your targeted value : ";
    cin>>target;
    int targeted=linearSearch(arr,sz,target);
    cout<<"Index of targeted element is  : "<<targeted;
    return 0;
}