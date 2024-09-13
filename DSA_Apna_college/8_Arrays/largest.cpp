
#include<Iostream>
#include<limits.h>
using namespace std;

int largest(int arr[],int sz){
    int large = INT_MIN;
    for(int i=0;i<sz;i++){
        // if(arr[i]>large) large=arr[i];
        large=max(arr[i],large);
    }
    return large;
}

int main(){
    int arr[10];
    int sz=sizeof(arr)/sizeof(int);
    cout<<"Enter 10 values : ";
    for(int i=0;i<sz;i++) cin>>arr[i];
    int large=largest(arr,sz);
    cout<<"largest element is  : "<<large;
    return 0;
}