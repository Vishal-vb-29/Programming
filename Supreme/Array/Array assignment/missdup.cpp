#include<iostream>
using namespace std;

void findmissdup(int *a ,int size)
{
for(int i=0;i<size;i++){
if(a[i]!=a[a[i]-1]) swap(a[i],a[a[i]-1]);
else i++;
}
for(int i=0;i<size;i++) cout<<a[i]<<" "; cout<<endl;
for(int i=0;i<size;i++)
{
if(a[i]!=i+1 ) cout<<i+1<<" ";
}
}
int main(){
int a[]={1,3,5,5,4};
int size=5;
findmissdup(a,size);
return 0;
}