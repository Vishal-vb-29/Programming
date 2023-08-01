#include<iostream>
#include<vector>
using namespace std;
int main()
{
int arr[]={1,3,5,7,7,9};
int brr[]={2,4,6,5,3,8};
int sizea=5,flag;
int sizeb=4;
vector<int> ans;
for(int i=0;i<sizea;i++) ans.push_back(arr[i]);
for(int j=0;j<sizeb;j++)
  {
    flag=0;
    for(int i=0;i<sizea;i++)
    {
      if(arr[i]==brr[j])
      {
        flag=1;
        break;
      }
    }
    /* flag!=1 means element of array2 is not present in array1 */
    if(flag!=1)
    {
     ans.push_back(brr[j]);
}
}
for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
return 0;
}