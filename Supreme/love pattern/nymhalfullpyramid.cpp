#include<iostream>
using namespace std;
int main()
{
int row;
cout<<"Enter no of row :";
cin>>row;
for(int i=0;i<row;i++)
{
for(int i=0;i<row-i-1;i++)
cout<<" ";
for(int j=0;j<i+1;j++){
if(j==0) cout<<j+1;
else if(j==i+1) cout<<i;
else cout<<" ";
}
cout<<endl;
}
return 0;
}
