#include<iostream>
using namespace std;
int main(){
int a[10]={2,3,6,5,8,9,7,4,5,8};
int low=0,high=9,key,mid;
cout<<"Enter a key element : ";
cin>>key;
while(low<=high)
{
mid=(low+high)/2;
if(key==a[mid])
{
cout<<"found at : "<<mid;
return 0;
}
else if(key<a[mid]) high=mid-1;
else low=mid+1;
}
cout<<"Not Found ";
return 0;
}

//complexity O(logn) faster than linear search