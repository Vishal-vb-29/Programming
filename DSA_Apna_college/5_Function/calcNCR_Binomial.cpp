// Calculate nCr binomial coefficient for n & r
#include<iostream>
using namespace std;

int factorialN(int n){
    int fact=1;
    while(n){
        fact*=n;
        n--;
    }
    return fact;
}

int calcNCR(int n,int r){
    int fact_n=factorialN(n);
    int fact_r=factorialN(r);
    int fact_nmr=factorialN(n-r);
    return fact_n/(fact_r*fact_nmr);
}

int main(){
    int n,r;
    cout<<"Enter a value of n : ";
    cin>>n;
    cout<<"Enter a value of r : ";
    cin>>r;
    cout<<"The nCr of a given number is : "<<calcNCR(n,r) ;
    return 0;
}