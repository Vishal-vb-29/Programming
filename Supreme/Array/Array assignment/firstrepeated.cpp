#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int firstrepeated(int arr[] , int n)
{
int maxi=arr[0];
        for(int i=1;i<n;i++) {
            if(arr[i]>maxi) maxi=arr[i];
        }      
        int hash[maxi+1];
memset(hash,0,sizeof(hash));
for(int i=0;i<n;i++) {
    if(hash[arr[i]]>=0) hash[arr[i]]++;
}
for(int i=0;i<n;i++){
     if(hash[arr[i]]>=2) return arr[i];
}
return -1;
}
int main()
{
    int a[]={1,5,3,4,3,5,6};
    int n=7;
    int ans=firstrepeated(a,n);
    cout<<ans<<" ";
    return 0;
}
