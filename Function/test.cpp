#include<iostream>
#include<cstring>
using namespace std;
int main()
{
int arr[10];
memset(arr,-1,sizeof(arr));
for(int i=0;i<10;i++) cout<<arr[i]<<" ";
return 0;

}