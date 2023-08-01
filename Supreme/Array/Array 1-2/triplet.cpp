#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int> arr{1,2,3,5,8,9,4,5};
int sum;
cout<<"Enter a sum: ";
cin>>sum;
for(int i=0;i<arr.size();i++)
{
for(int j=i+1;j<arr.size();j++)
{
for(int k=j+1;k<arr.size();k++)
if(arr[i]+arr[j]+arr[k]==sum) cout<<arr[i]<<"+"<<arr[j]<<"+"<<arr[k]<<"="<<sum<<endl;
}
}
return 0;
}