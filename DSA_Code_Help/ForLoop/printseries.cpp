#include<iostream>
using namespace std;
int main()
{
int num,sum=0;
cout<<"Enter a number :";
cin>>num;
for(int i=0;i<=num;i++)
{
cout<<i<<endl;
sum=sum+i;
}
cout<<"Sum of above series is :"<<sum;
return 0;
}