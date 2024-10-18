#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int> &arr){
    int pro=1;
    int n=arr.size();
    vector<int> ans(n,1);
    vector<int> prefix(n,1);
    vector<int> suffix(n,1);
    // Right Product = Prefix
    for(int i=1;i<arr.size();i++){
        prefix[i]=prefix[i-1]*arr[i-1];
    }
    // Left Product = Suffix
    for(int i=n-2;i>=0;i--){
        suffix[i]=suffix[i+1]*arr[i+1];
    }

    for(int i=0;i<n;i++){
        ans[i]=prefix[i]*suffix[i];
    }
    return ans;
}

int main(){
    vector<int> arr={1,2,3,4};
    vector<int> ans=productExceptSelf(arr);
    for(int i:ans) cout<<i<<" ";
    return 0;
}