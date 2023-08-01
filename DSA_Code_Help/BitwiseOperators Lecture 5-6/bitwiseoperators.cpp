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
int d= a|b;
int e=~a;
int f=~b;
int g=a^b;
cout<<a<<" "<<b<<endl;
cout<<"Output of Bitwise operations "<<endl<<"a & b : "<<c<<endl<<"a | b : "<<d<<endl<<"~a : "<<e<<endl<<"~b : "<<f<<endl<<"a ^ b : "<<g<<endl;
cout<<"Right Shift -  "<<endl<<"a>>1 :"<<(a>>1)<<endl<<"b>>1 :"<<(b>>1)<<endl;
cout<<"Left Shift -  "<<endl<<"a<<1 :"<<(a<<1)<<endl<<"b<<1 :"<<(b<<1);
return 0;
}



// when we are finding the digit , then take its modulus with 10 and then divide by 10 to move to the next digit.
// but when we are finding the bit then the decimal no is treated as binary and we will take &(AND) with 1 to find its bit. 