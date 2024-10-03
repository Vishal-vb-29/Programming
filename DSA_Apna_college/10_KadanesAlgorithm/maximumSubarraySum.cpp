// Maximum Subarray Sum

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int kadanesAlgo(vector<int>& ans){
    int currSum= 0;
    int maxSum= INT_MIN;

        for(int val:ans){
            currSum+=val;
            if(currSum>maxSum) maxSum=currSum;
            if(currSum<0) currSum=0;
        }
    
    return maxSum;
}

int main(){
    vector<int> ans={3,-4,5,4,-1,7,-8};
    int sum=kadanesAlgo(ans);
    cout<<"Maximum sum is : "<<sum;
    return 0;
}