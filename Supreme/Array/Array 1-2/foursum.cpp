#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int> arr{5,1,12,15,8,9,7};
int sum;
cout<<"Enter a sum: ";
cin>>sum;
for(int i=0; i<arr.size();i++)
{
for(int j=i+1;j<arr.size();j++)
{
for(int k=j+1;k<arr.size();k++)
{
for(int t=k+1;k<arr.size();t++)
if(arr[i]+arr[j]+arr[k]+arr[t]==sum) cout<<arr[i]<<"+"<<arr[j]<<"+"<<arr[k]<<"+"<<arr[t]<<"="<<sum<<endl;
}
}
} 
return 0;
}