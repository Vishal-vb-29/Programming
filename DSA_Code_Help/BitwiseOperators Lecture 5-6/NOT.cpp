#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"Enter Two number: ";
cin>>a;
cout<<endl;
cin>>b;
int c= ~a;
int d= ~b;
cout<<"Output of NOT Bitwise operations "<<endl<<c<<endl<<d;
return 0;
}