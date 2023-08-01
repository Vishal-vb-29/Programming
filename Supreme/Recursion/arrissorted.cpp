#include<iostream>
#include<vector>
using namespace std;
bool issorted(vector<int>& arr,int& n,int i){
    if(i==n) return true;
    if(arr[i]>arr[i+1]) return false;
    else return issorted(arr,n,++i);
    }

int main()
{
    vector<int> arr{10,20,30,40,60};
    int n=arr.size()-1;
    int i=0;
    bool issort=false;
    issort=issorted(arr,n,i);
    if(issort) cout<<"Array is sorted"<<endl;
    else cout<<"Array is not sorted"<<endl;
    return 0;
}