/*Arrays
• Array is a collection of similar data elements under one name, each element is 
accessible using its index
• Memory for array is allocated contagiously
• For-each loop is used for accessing array
• N-dimension arrays are supported by C++
• Two-Dimensional Arrays are sued for Matrices
• Array can be created in Stack or Heap Section of memorY
*/


#include<iostream>
using namespace std;
int main(){

int a[5]={2,4,6,5,8};
for(int i=0; i<=4;i++) cout<<a[i]<<endl;

//int a[5]={2,4,6,5,8};  error


int f[5]={2,4,6};
for(int i=0; i<=4;i++) cout<<f[i]<<endl;


int b[]={5,4,5,6,8};
for(int i=0; i<=4;i++) cout<<b[i]<<endl;

char c[]={'A','B','F','E','C'};
for(int i=0; i<=4;i++) cout<<c[i]<<endl;


float d[]={2.4,5.6,5,4.2,8};
for(int i=0; i<=4;i++) cout<<d[i]<<endl;

char g[]={'A','B','F','E','C'};
for(int x:a) cout<<x<<endl;   //foreach loop 

char t[]={'A','B','F','E','C'};
for(char g: t) cout<<g<<endl;

float r[]={2.4,5.6,5,4.2,8};
for(auto y:r) cout<<y<<endl; //foreach auto

return 0;
}