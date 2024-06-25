#include<iostream>
#include<limits>
using namespace std;
int minimum(int *arr,int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min) min=arr[i];
    }
    return min;
}
int main(){
    int n;
    cout<<"Enter the no of element you want to enter :";
    cin>>n;
    int arr[100];
    cout<<"Enter the Elements : ";
    for(int i=0;i<n;i++) cin>>arr[i];
    int min=minimum(arr,n);
    cout<<"Minimum Element is : "<<min;
    return 0;
}