// Sort 0's 1's 2's
#include<iostream>
#include<vector>
using namespace std;

vector<int> sort012(vector<int> &arr){
    int n=arr.size();
    int no0=0,no1=0,no2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0) no0++;
        if(arr[i]==1) no1++;
        if(arr[i]==2) no2++;
    }
    int i=0;
    while(i<no0) arr[i++]=0;
    while(i<no0+no1) arr[i++]=1;
    while(i<no0+no1+no2) arr[i++]=2;
    return arr;
} 

int main(){
    vector<int> arr={0,1,2,0,0,1,2,2,1};
    vector<int> ans=sort012(arr);
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";

    return 0;
}