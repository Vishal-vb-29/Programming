#include<iostream>
using namespace std;

int binarySearch(int* arr,int size,int k){
int start=0;
int end=size-1;
int mid=(start+end)/2;
while(start<=end){
if(arr[mid]==k) return mid;
else if(arr[mid]>k) end=mid-1;
else if(arr[mid]<  k) start=mid+1;
mid=(start+end)/2;
}
return -1; 
}
int main()
{
int even[6]={5,6,9,11,12,55};
int odd[5]={3,8,11,14,16};
int index=binarySearch(even,6,12);
cout<<index;
int oindex=binarySearch(odd,5,11);
cout<<oindex;
return 0;
}