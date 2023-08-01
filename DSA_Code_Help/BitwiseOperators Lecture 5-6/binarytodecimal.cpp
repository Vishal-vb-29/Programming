//binary to decimal: as OS reads input as decimal(given is binary no) so we have find digit and calculate according to //question.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int num,ans=0,i=0;
cout<<"Enter your number : ";
cin>>num;
while(num!=0)
{
int digit = num%10;
if(digit==1)
{
ans=ans+pow(2,i);
}
num=num/10;
i++;
}
cout<<ans<<endl;
return 0;
}