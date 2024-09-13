// WAF to conver a decimal number to binary number
// [1000]2 =[8]10

#include<iostream>
using namespace std;

int decToBinary(int n){
    int ans=0;
    int pow=1;
    while(n){
        int rem=n%2;
        n/=2;
        ans=ans+rem*pow;
        pow=pow*10;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int bin=decToBinary(n);
    cout<<"Binary conversion is : "<<bin<<endl;
    return 0;
}