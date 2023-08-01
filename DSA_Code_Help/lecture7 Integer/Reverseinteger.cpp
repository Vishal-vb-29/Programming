#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int num,ans=0,i=0;
cout<<"Enter a number : ";
cin>>num;
while(num!=0)
{
int digit=num%10;
if((ans>INT_MAX/10) || (ans<INT_MIN/10)) return 0;
ans=(ans*10)+digit;
num=num/10;
i++;
}
cout<<ans;
return 0;
}