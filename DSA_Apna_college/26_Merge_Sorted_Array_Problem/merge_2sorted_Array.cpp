#include<iostream>
#include<vector>
using namespace std;

void merge2Sorted(int* arr1,int n1,int* arr2,int n2){
    int i=n1-1,j=n2-1,idx=n1+n2-1;
    while(i>=0 && j>=0){
        if(arr1[i]>arr2[j]) arr1[idx--]=arr1[i--];
        else arr1[idx--]=arr2[j--];    
    }
    while(i>=0) arr1[idx--]=arr1[i--];
    while(j>=0) arr1[idx--]=arr2[j--];
}


int main(){
    int arr1[]={1,2,3,0,0,0};
    int n1=3;
    int arr2[]={2,5,6};
    int n2=3;
    merge2Sorted(arr1,n1,arr2,n2);
    for(int i=0;i<n1+n2;i++) cout<<arr1[i]<<" ";
    return 0;
}