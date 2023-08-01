#include<iostream>
#include<vector>
using namespace std;
int quotient(int divisor,int dividend)
{
int start=0,end=abs(dividend);
int mid=start+(end-start)/2;
int ans=0;
while(start<=end)
{
if(abs(mid*divisor)==abs(dividend))
{
ans=mid;
break;
}
if(abs(mid*divisor)>abs(dividend)) end=mid-1;
else
{
ans=mid;
start=mid+1;
}
mid=start+(end-start)/2;
}
if((divisor<0 && dividend<0) || (divisor>0 && dividend>0)) return ans;
else return -ans;
}

int main()
{
int divident,divisor;
cout<<"Enter divident :";
cin>>divident;
cout<<"Enter divisor :";
cin>>divisor;
int ans=quotient(divisor,divident);
cout<<"Quotient is :"<<ans;
return 0;
}