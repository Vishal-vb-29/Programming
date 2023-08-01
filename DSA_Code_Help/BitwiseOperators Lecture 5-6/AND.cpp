#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"Enter Two number: ";
cin>>a;
cout<<endl;
cin>>b;
int c= a&b;
cout<<"Output of Bitwise operations "<<endl<<"a & b : "<<c;
return 0;
}