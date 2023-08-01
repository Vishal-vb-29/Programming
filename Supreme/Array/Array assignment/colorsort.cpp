#include<iostream>
using namespace std;
void sortColor(int arr[], int n){
int l=0,m=0,h=n-1;
while(m<h)
{
if(arr[m]==0){
swap(arr[l],arr[m]);
l++;m++;}
else if(arr[m]==1) m++;
else {
swap(arr[m],arr[h]);
h--;
}
}
}
int main()
{
int arr[]={1,0,2,1,0};
int n=sizeof(arr)/sizeof(int);
sortColor(arr,n);
for(int i=0;i<n;i++) cout<<arr[i]<<" ";

return 0;
}