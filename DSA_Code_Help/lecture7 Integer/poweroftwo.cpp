#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int n;
cout<<"Enter a number :";
cin>>n;
for(int i=0;i<31;i++)
{
int ans=pow(2,i);
if (ans==n){
cout<<"True";
return true;
}
}
cout<<"False";
return false;
}
