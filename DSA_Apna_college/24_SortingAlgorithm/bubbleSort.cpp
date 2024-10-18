#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &arr){
    int s=0,e=arr.size(),j=0;
    while(s<e-1){
        for(int j=0;j<e-s-1;j++){
            if(arr[j]>arr[j+1]) swap(arr[j+1],arr[j]);
            j++;
        }
    s++;
    }

}

int main(){
    vector<int> arr={0,1,2,0,0,1,2,2,1};
    bubbleSort(arr);
    for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
    return 0;
}