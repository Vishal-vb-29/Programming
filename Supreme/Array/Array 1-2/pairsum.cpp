#include<iostream>
#include<vector>
using namespace std;
int main()
{
int sum;
cout<<"Enter a sum for pairsum :";
cin>>sum;
vector<int> arr{1,3,5,7,2,4,6};
for(int i=0;i<arr.size();i++)
{
int element=arr[i];
for(int j=i+1;j<arr.size();j++)
if(element+arr[j]==sum) cout<<element<<"+"<<arr[j]<<"="<<sum<<endl;
}
return 0;
}