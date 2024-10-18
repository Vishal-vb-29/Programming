#include<iostream>
#include<vector>
using namespace std;

void dutchNationFlag(vector<int> &arr){
    int l=0,m=0,h=arr.size()-1;
    while(m<=h){
        if(arr[m]==0){
            swap(arr[m++],arr[l++]);     
        }else if(arr[m]==1) m++;
        else if(arr[m]==2) swap(arr[m],arr[h--]);
    }
}

int main(){
    vector<int> arr={0,1,2,0,0,1,2,2,1};
    dutchNationFlag(arr);
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";

    return 0;
}