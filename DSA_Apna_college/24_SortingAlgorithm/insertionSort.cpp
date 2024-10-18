#include<iostream>
#include<vector>
using namespace std;

// Eg :  Playing cards

void insertionSort(vector<int> &arr){
    for(int i=1;i<arr.size();i++){
        int curr=arr[i],prev=i-1;
        while(prev>=curr && arr[prev]>curr){
            swap(arr[prev+1],arr[prev]);
            prev--;
        }
        arr[prev+1]=curr;
    }

    
}

int main(){
    vector<int> arr={0,1,2,0,0,1,2,2,1};
    insertionSort(arr);
    for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
    return 0;
}