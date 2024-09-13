#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums){
    int num=0;
    for(int val:nums) num^=val;
    return num;
}

int main(){
    vector<int> vec={1,2,3,4,2,3,1};
    int unq=singleNumber(vec);
    cout<<unq;
    return 0;
}