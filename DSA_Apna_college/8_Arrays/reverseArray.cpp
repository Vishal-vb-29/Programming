// Reveerse an array

#include<iostream>
using namespace std;

void reverse(int *arr,int sz){
    int i=0,j=sz-1;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++,j--;
    }
}


int main(){
    int arr[10];
    int sz=sizeof(arr)/sizeof(int);
    cout<<"Enter 10 values : ";
    for(int i=0;i<sz;i++) cin>>arr[i];
    reverse(arr,sz);
    for(int i=0;i<sz;i++) cout<<arr[i]<<" ";
    return 0;
}