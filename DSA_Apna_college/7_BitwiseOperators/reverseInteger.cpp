// WAF to reverse an Integer n.

#include<iostream>
using namespace std;

int reverseInt(int n){
    int ans=0;
    while(n){
        int digit=n%10;
        n/=10;
        ans=ans*10+digit;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int ans=reverseInt(n);
    cout<<"Reverse of a number is : "<<ans;
    return 0;
}