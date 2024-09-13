// ---------- Homework Question ----------
// WAF to find index of smallest or largest element

#include<Iostream>
#include<limits.h>
using namespace std;

// Smallest number index
int smallest(int arr[],int sz){
    int small = INT_MAX;
    int indSml=-1;
    for(int i=0;i<sz;i++){
        if(arr[i]<small) {
            indSml=i;
            small=arr[i];
        }
    }
    return indSml;
}

// Large number index
int largest(int arr[],int sz){
    int large = INT_MIN;
    int indlrg=-1;
    for(int i=0;i<sz;i++){
        if(arr[i]>large) {
            indlrg=i;
            large=arr[i];
        }
    }
    return indlrg;
}

int main(){
    int arr[10];
    int sz=sizeof(arr)/sizeof(int);
    cout<<"Enter 10 values : ";
    for(int i=0;i<sz;i++) cin>>arr[i];
    int small=smallest(arr,sz);
    cout<<"Index of Smallest element is  : "<<small<<endl;
    int large=largest(arr,sz);
    cout<<"Index of Largest element is : "<<large<<endl;
    return 0;
}