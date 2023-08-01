#include<iostream>
#include<vector>
using namespace std;
void printColWiseSum(vector<vector<int>> arr)
{
for(int i=0;i<arr[0].size();i++){
int sum=0;
for(int j=0;j<arr.size();j++)
sum=sum+arr[j][i];

cout<<sum<<" ";
}
}
int main()
{
vector<vector<int>> arr;
vector<int> a{1,2,3};
vector<int> b{4,6,5};
vector<int> c{8,9,4};
arr.push_back(a);
arr.push_back(b);
arr.push_back(c);
for(int i=0;i<arr.size();i++)
{
for(int j=0;j<arr[0].size();j++)
{
cout<<arr[i][j]<<" ";
}
cout<<endl;
}
printColWiseSum(arr);

return 0;
}