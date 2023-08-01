#include<iostream>
using namespace std;
int main()
{
int num;
cout<<"Enter a number : ";
cin>>num;
int a=0,b=1;
cout<<a<<" "<<b<<" ";
for(int i=1;i<=num-2;i++)
{
int next=a+b;
a=b;
b=next;
cout<<next<<" ";
}
return 0;
}