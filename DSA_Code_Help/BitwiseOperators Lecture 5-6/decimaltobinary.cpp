#include<iosteam>
#include<math.h>
using namespacce std;
int main()
{
int n,ans=0,i=0;
cout<<"Enter your number : ";
cin>>n;
while(n!=0)
{
int bit = n & 1;                //normal : ans=ans*10+digit;   123
ans = (pow(10,i)*bit) + ans;    //reverse: ans=digit*10^i+ans;   321
n = n >> 1;                     
i++;
}
cout<<"Answer is : "<<ans<<endl;;
return 0
}