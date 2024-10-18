#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool isPossible(vector<int> &stall,int N,int C, int minAllowedDist){
    int cows=1,lastStallPos=stall[0];
    
    for(int i=1; i<N; i++){
        if(stall[i]-lastStallPos >= minAllowedDist){
            cows++;
            lastStallPos=stall[i];
        }
        if(cows==C) return true;
    }

    return false;
}

int aggresiveCows(vector<int> &stall,int N,int C){
    sort(stall.begin(),stall.end());
    int st=1,end = stall[N-1]-stall[0];
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isPossible(stall,N,C,mid)){
            ans=mid;
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
    return ans; 
}

int main(){
    int N=5, C=3;
    vector<int>arr ={1,2,8,4,9};

    cout<<aggresiveCows(arr,N,C);
    return 0;
}