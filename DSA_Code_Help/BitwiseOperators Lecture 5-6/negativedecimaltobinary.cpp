#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int num;
cout<<"Enter your decimal number : ";
cin>>num;
int i=0,ans=0;
while(num!=0)
{
int bit=num&1;
if(bit==0) (ans=1*pow(10,i))+ans;
else ans=ans;
num=num>>1;
i++;
}
cout<<ans;

return 0;
}