#include<iostream>
using namespace std;

void reverse(int* arr,int st,int end){
    while(st>=end){
        swap(arr[st++],arr[end--]);
    }
}

void nextPermutation(int *arr,int n){
    int piv=-1;
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            piv=i;
            break;
        }
    }
    if(piv==-1){
        reverse(arr,0,n-1);
        return;
    } 

    // Next larger element
    for(int i=n-1;i>piv;i--){
        if(arr[i]>arr[piv]){
            swap(arr[i],arr[piv]);
            break;
        }
    }
    
    // Reverse piv+1 to n-1
        int i=piv+1,j=n-1;
        while(i<=j){
            swap(arr[i++],arr[j--]);
        }
    
}


int main(){
    int arr[]={1,2,3};
    int n=3;
    nextPermutation(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}