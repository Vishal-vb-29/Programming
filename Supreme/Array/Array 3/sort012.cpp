#include<iostream>
#include<vector>
using namespace std;

void sort123(vector<int> nums){

int l=0,m=0,h=nums.size()-1;
            while(m<=h)
            if(nums[m]==0){
                 swap(nums[l],nums[m]);
                l++;
                m++;
                }
            else if(nums[m]==1) m++;
            else {
                swap(nums[h],nums[m]);
                h--;
            }
}
int main()
{
vector<int> arr;
int size;
cout<<"Enter a size :";
cin>>size;
for(int i=0;i<size;i++)
{
cout<<"Enter number :";
cin>>arr[i];
}
sort123(arr);
for(int i=0;i<size;i++) cout<<arr[i]<<" ";
return 0;
}