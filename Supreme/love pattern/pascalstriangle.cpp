#include<iostream>
using namespace std;
int main()
{
int n=5;
for(int i=1;i<=n;i++)
{
int c=1;
for(int k=0;k<n-i+1;k++) cout<<" ";
for(int j=1;j<=i;j++){
cout<<c<<" ";
c=c*(i-j)/j;
}
cout<<endl;
}
return 0;
}