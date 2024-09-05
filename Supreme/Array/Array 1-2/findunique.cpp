#include<iostream>
#include<vector>

// input a={1,2,1,2,4,3,3} output = 4

using namespace std;
int findunique(vector<int>);
int main()
{
int n;
cout<<"Enter a size : ";
cin>>n;
vector<int> arr(n);
cout<<"Enter the elements"<<endl;
for(int i=0;i<arr.size();i++) cin>>arr[i];
int uniqueElement=findunique(arr);
cout<<"Unique Element is :"<<uniqueElement<<endl;
return 0;
}
int findunique(vector<int> arr)
{
int ans=0;
for(int i=0;i<arr.size();i++)
ans=ans^arr[i];
return ans;
}