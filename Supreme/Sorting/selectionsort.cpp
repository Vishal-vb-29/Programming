#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int>& x){
int i=0,f,si,g;
while(i<x.size()-1)
{
si=i;
f=i+1;
while(f<x.size())
{
if(x[si]>x[f])
si=f;
f++;
}
g=x[si];
x[si]=x[i];
x[i]=g;
i++;
}
}
int main()
{
vector<int> arr;
int n,size;
cout<<"Enter your Requirement :";
cin>>size;
for(int i=0;i<size;i++) 
{
cout<<"Enter number :";
cin>>n;
arr.push_back(n);
}
selectionSort(arr);
for(int i=0;i<arr.size();i++) cout<<arr[i]<<"  ";
return 0;
}