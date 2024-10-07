// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &board,int n,int m,int maxAllowedTime){
    int painter=1,time=0;
    int stu=1,pages=0;
    for(int i=0;i<n;i++){
        if(time+board[i]<=maxAllowedTime) time+=board[i];
        else{
            painter++;
            time=board[i];
        } 
    }
    return painter<=m?true:false;
}


int paintersPartition(vector<int> &board,int n, int m){
    int ans=0;
    int sum=0,maxValue=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=board[i];
        maxValue=max(maxValue,board[i]);
    }
    int st=maxValue,end=sum;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isPossible(board,n,m,mid)){
            ans=mid;
            end=mid - 1;
        }else{
            st = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> board={40,30,10,20};
    int m=2,n=4;
    cout<<paintersPartition(board,n,m);
    return 0;
}