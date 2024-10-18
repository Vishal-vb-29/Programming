#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int> &arr){
    for(int i=0;i<arr.size()-1;i++){
        int min=i;
        for(int j=i+1;j<arr.size();j++){
             if(arr[min]>arr[j]) min=j;
        }
        swap(arr[i],arr[min]);
    }
    
}

int main(){
    vector<int> arr={0,1,2,0,0,1,2,2,1};
    selectionSort(arr);
    for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
    return 0;
}