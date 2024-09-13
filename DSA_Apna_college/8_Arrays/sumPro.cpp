//--------- Homework Problem----------
// WAF to calculate sum of all numbers in an array.

#include<iostream>
using namespace std;

int summ(int *arr,int sz){
    int sm=0;
    for(int i=0;i<sz;i++) sm += arr[i];
    return sm;    
}

// WAF to calculate sum of all numbers in an array.

int prodct(int *arr,int sz){
    int prdt=1;
    for(int i=0;i<sz;i++) prdt *= arr[i];
    return prdt;    
}

// WAF to swap the max & min number of an array.




int main(){
    int arr[10];
    int sz=sizeof(arr)/sizeof(int);
    cout<<"Enter 10 values : ";
    for(int i=0;i<sz;i++) cin>>arr[i];
    cout<<"Sum of array element is : "<<summ(arr,sz)<<endl;
    cout<<"Product of array element is : "<<prodct(arr,sz)<<endl;
    return 0;
}

