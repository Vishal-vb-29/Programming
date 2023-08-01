#include<iostream>
#include<vector>
using namespace std;
int binarysearchrec(vector<int>& arr,int s, int e,int& key){
    if(s>e) return -1;
    int mid=s+(e-s)/2;
    if(arr[mid]==key) return mid;
    else if(arr[mid]<key) return binarysearchrec(arr,mid+1,e,key);
    else binarysearchrec(arr,s,mid-1,key);
}
int main()
{
    vector<int>arr{10,20,30,40,50,60};
    int key;
    int s=0,e=arr.size()-1;
    cout<<"Enter a key : ";
    cin>>key;
    int bse=binarysearchrec(arr,s,e,key);
    cout<<bse;
    return 0;
    }