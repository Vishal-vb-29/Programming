// Pair Sum : Return pair in sorted array with target sum.

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// As the array is sorted : Two pointer Approach
vector<int> pairSumTP(vector<int>& nums,int target){
    cout<<"This is Two Pointer Solution"<<endl;
    vector<int> ans;
    int st=0;
    int end=nums.size()-1;
    while(st<end){
        int pairSum=nums[st]+nums[end];
        if(pairSum>target){
            end--;
        }else if(pairSum<target){
            st++;
        }else{
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
    }
    return ans;
}

// BruteForce = O(n2) Approach
vector<int> pairSumBF(vector<int>& nums,int target){
    cout<<"This is Brute Force Solution"<<endl;
    vector<int> ans;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    return ans;    
}

int main(){
    vector<int> nums={2,7,11,15};
    int target=17;
    vector<int> ans=pairSumTP(nums,target);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}