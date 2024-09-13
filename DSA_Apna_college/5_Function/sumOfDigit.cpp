// Calculate sum of digits of a number.
#include<iostream>
using namespace std;

int calculateSumOfDigit(int n){
    int sum=0;
    while(n){
        int digit = n%10;
        sum+=digit;
        n=n/10;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"The sum of Digit of a given number is : "<<calculateSumOfDigit(n)<<endl;
    return 0;
}