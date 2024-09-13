// WAF to find if a number is power of 2 without any loop

#include<iostream>
using namespace std;

bool powOfTwo(int n){
    // This approach uses the bitwise property of powers of 2: a number n is a power of 2 if n & (n - 1) equals 0 and n is greater than 0.

    return n > 0 && (n & (n - 1)) == 0;

// This approach keeps dividing the number by 2 in a loop. If at any point it encounters a remainder other than 0, it returns false. If the loop continues until the number becomes 1, it returns true.

    // if(n&1==1) return false;
    // else{
    //     while (n > 1) {
    //     if (n % 2 != 0) {
    //         return false;
    //     }
    //     n = n / 2;
    // }
    // return true;
    // }
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    bool b=powOfTwo(n);
    cout<<b;
    return 0;
}