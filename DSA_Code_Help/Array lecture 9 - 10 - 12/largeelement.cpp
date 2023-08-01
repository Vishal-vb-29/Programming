#include<iostream>
using namespace std;

int main()
{
int a[7]={5,8,9,6,7,1,2};
int max=a[0];
for(int i=0;i<=6;i++)
{
if(a[i]>max) max=a[i];
}
cout<<"The max element : "<<max;
return 0;
}