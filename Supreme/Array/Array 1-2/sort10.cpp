#include<iostream>
#include<vector>
using namespace std;
int main()
{
int start=0,i=0;
vector<int> arr{0,1,1,0,1,0,1,0};
int end=arr.size()-1;
while(i!=end)
{
if(arr[i]==0)
{
swap(arr[start],arr[i]);
i++;
start++;
}
else{
swap(arr[i],arr[end]);
end--;
}
}
for( auto val : arr) cout<<val<<" ";





return 0;
}