#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Brute Force
int majorityElementBF(vector<int> &nums){
    cout<<"Using Brute Force"<<endl;
    for(int i=0;i<nums.size();i++){
        int freq=0;
        for(int j=0;j<nums.size();j++){
            if(nums[i]==nums[j]) freq++;
        }
        if(freq>nums.size()/2) return nums[i];
    }
    return -1;
}

// Optimized way
int majorityElementOW(vector<int> &nums){
    cout<<"Using Optimized way"<<endl;
    // sort
    sort(nums.begin(),nums.end());
     int freq=1,ans=nums[0];
     for(int i=0;i<nums.size();i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }else{
            freq=1;
            ans=nums[i];
        }
        if(freq>nums.size()/2) return ans;
     }
     return ans;
}
// Moore's Voting Algorithm
int majorityElementMVA(vector<int> &nums){
    cout<<"Using Moore voting Algorithm"<<endl;
     int freq=0,ans=0;
     for(int i=0;i<nums.size();i++){
        if (freq==0){
            ans=nums[i];
        }
        if(ans==nums[i]) freq++;
        else freq--;
     }
     int count=0;
     for(int i=0;i<nums.size();i++){
        if(nums[i]==ans) count++;
     }
     if(count>nums.size()/2) return ans;
     return -1;
}

// One Variation : if No majority Element than return -1.

int main(){
    vector<int> nums={2,2,1,1,3,3,1,2,2,3,3,3,2,3,3};
    int majority_Ele=majorityElementOW(nums);
    cout<<"Majority Element is : "<<majority_Ele;
    return 0;
}