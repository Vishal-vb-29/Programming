#include<iostream>
using namespace std;


/*array is modified so it is not a suitable solution*/

// int findduplicate(int arr[],int size)
// {
// int ans=-1;
// for(int i=0;i<size;i++)
// {
// int curele=abs(arr[i]);
// if(arr[curele]<0){
// ans=curele;
// break;
// }
// else arr[curele]=arr[curele]*(-1);
// }
// return ans;
// }
int findduplicate(int nums[],int size){
    while(nums[0]!=nums[nums[0]])
    {
        swap(nums[0],nums[nums[0]]);
    }
    return nums[0];

}
int main()
{
int arr[]={1,5,3,2,5,4};
int size=5;
int ans=findduplicate(arr,size);
cout<<"The duplicate element is : "<<ans;
return 0;
}