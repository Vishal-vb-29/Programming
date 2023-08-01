#include<iostream>
using namespace std;
int main()
{
int num,count=0,mask=0;
cout<<"Enter a number :";
cin>>num;
int m=num;
if (num==0){
cout<<1;
return 0;
}
while(m != 0)
{
mask = (mask << 1) | 1 ;
m = m >> 1;
}
int ans = (~num) & mask;
cout<<ans;
return 0;
}



/* To display the compliment of any given number let say number is 5(101) so the compliment is 2(10) so to solve this 
n=5 - (101) - (00000000000000000000000000000101) 
~n=~5 - (11111111111111111111111111111010)
now create mask of ~n i.e.(00000000000000000000000000000111)
now to find compliment of n(5) we have to ~n & mask
(11111111111111111111111111111010)
 & 
(00000000000000000000000000000111)
=
(00000000000000000000000000000010)  and compliment of 5 i.e. 2(10) 
mask=(mask<<1)|1;
*/

