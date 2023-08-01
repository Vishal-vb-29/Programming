#include<iostream>
#include<vector>
using namespace std;
void leftrotate1(vector<int> arr)
{
int st=arr[0];
int temp;
for(int i=0;i<arr.size();i++)
{
temp=arr[i+1];
arr[i+1]=arr[i];
arr[i]=temp;
}
arr[9]=st;
for(int i=0;i<10;i++) cout<<arr[i]<<" ";
}
int main(){
vector<int> arr(10);
for(int i=0;i<10;i++) cin>>arr[i];
leftrotate1(arr);

return 0;
}