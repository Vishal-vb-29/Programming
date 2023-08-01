#include<iostream>
#include<vector>
using namespace std;
int main()
{
int a[]={1,2,3,4,6,8}; int sizea=5;
int b[]={3,4,9,10}; int sizeb=4;
vector<int> arr;
for(int i=0;i<sizea;i++){
int element=a[i];
for(int j=0;j<sizeb;j++){
if(element==b[j]){
b[j]=-1;    //mask
arr.push_back(element);
}
}
}
for(auto val: arr) cout<<val<<" ";
cout<<endl;
return 0;
}