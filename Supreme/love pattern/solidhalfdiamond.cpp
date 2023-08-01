#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int j=0;
for(int i=0;i<n;i++)
{
int cond=i+1;
for(j=0;j<cond;j++)
{if(j>n/2){
cond--;
cout<<"*";
}
else cout<<"*";
}
cout<<endl;
}

return 0;
}