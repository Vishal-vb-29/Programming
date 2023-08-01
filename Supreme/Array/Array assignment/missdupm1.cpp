#include<iostream>
using namespace std;
void missdup(int *a,int size)
{
    for(int i=0;i<size;i++)
    {
        // int index=abs(a[i]);
        if(a[abs(a[i])-1]>0){
            a[abs(a[i])-1] = a[abs(a[i])-1] * (-1);
        } 
    }
    for(int i=0;i<size;i++) cout<<a[i]<<" "; cout<<endl;
    for(int i=0;i<size;i++)
    {
        if(a[i]>0) cout<<i+1<<" ";
    }
}
int main()
{
    int a[]={1,3,5,3,4};
    int size=5;
    missdup(a,size);
    return 0;
}