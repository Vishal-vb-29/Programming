#include<iostream>
using namespace std;
int main(){
int sum=0;
int a[7]={5,7,8,9,6,5,4};
for(int i=0;i<=6;i++) sum=sum+a[i];
cout<<"Sum of all the elements : "<<sum;

return 0;
}