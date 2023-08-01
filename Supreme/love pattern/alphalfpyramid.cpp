#include<iostream>
using namespace std;
int main()
{
char ch='A';
int n;
cin>>n;
for(int i=0;i<n;i++)
{
ch='A';
for(int j=0;j<i+1;j++)
{
cout<<ch;
ch++;
}
ch=ch-2;
for(int k=0;k<i;k++){
cout<<ch;
ch--;
}
cout<<endl;
}
return 0;
}