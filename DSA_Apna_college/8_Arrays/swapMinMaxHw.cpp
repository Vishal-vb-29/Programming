// WAF to swap the maxx & min number of an array.

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

void swapMinMax(int *arr,int sz){
    int smlidx=smallest(arr,sz);
    int largeidx=largest(arr,sz);
    int temp=arr[smlidx];
    arr[smlidx]=arr[largeidx];
    arr[largeidx]=temp;
}

int main(){
    int arr[10];
    int sz=sizeof(arr)/sizeof(int);
    cout<<"Enter 10 values : ";
    for(int i=0;i<sz;i++) cin>>arr[i];
    cout<<"Before swapping : "<<endl<<endl;
    for(int i=0;i<sz;i++) cout<<arr[i]<<" ";
    cout<<endl;
    cout<<"After swapping : ";
    swapMinMax(arr,sz);
    for(int i=0;i<sz;i++) cout<<arr[i]<<" ";
}
