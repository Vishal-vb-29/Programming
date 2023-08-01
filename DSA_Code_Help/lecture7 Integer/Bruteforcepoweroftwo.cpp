#include<iostream>
using namespace std;
int main()
{
int n,ans=1;
cout<<"Enter a number :";
cin>>n;
for(int i=0;i<=30;i++)
{
if (ans==n){
cout<<"True";
return true;
}
if(ans<INT_MAX/2)
ans=ans*2;
}
cout<<"False";
return false;
}