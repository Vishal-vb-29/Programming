#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
for(int i=0;i<n;i++)
{
int j;
for(j=0;j<n-i+1;j++) cout<<" ";
j=0;
for(int k=0;k<2*i+1;k++)
{
if(k>=i+1) {
j--;
cout<<j;}
else {
j++;
cout<<j;}
}
cout<<endl;
}
return 0;
}