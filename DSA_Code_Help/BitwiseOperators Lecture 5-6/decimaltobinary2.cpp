#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int n,i=0,ans=0;
cout<<"Enter a number : ";
cin>>n;
while(n!=0)
{
int rem=n%2;
ans= (rem*pow(10,i))+ans;
n=n/2;
i++;
}
cout<<ans;
return 0;
}