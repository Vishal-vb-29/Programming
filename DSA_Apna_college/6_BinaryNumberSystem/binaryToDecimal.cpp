// // WAF to convert a binary number to decimal number
// [8]10 = [1000]2

#include<iostream>
#include<cmath>
using namespace std;

int binTodec(int n){
    int ans=0;
    int pow=1;
    while(n){
        int rem=n%10;
        n/=10;
        ans+=rem*pow;
        pow=pow*2;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter a binary number : ";
    cin>>n;
    int dec=binTodec(n);
    cout<<"The decimal conversion of "<<n<<" is : "<<dec<<endl;
    return 0;
}