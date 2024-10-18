#include<iostream>
#include<vector>
using namespace std;

int containerWithMostWater(vector<int> &height){
    int st=0,end=height.size()-1;
    int maxWater=0;
    while(st<=end){
        int ht=min(height[st],height[end]);
        int wd=end-st;
        int area=ht*wd;
        if(area>maxWater) maxWater=area;
        if(height[st]>height[end]) end--;
        else st++;
    }
    return maxWater;
}

int main(){
    vector<int> height={1,8,6,2,5,4,8,3,7};
    cout<<"Container Max Water Capacity : "<<containerWithMostWater(height);
    return 0;
}