// WAF to print all prime numbers from 1 to N.
#include<iostream>
#include<cmath>
using namespace std;

void printprime1TN(int n){
    if(n<1){
        cout<<"Enter valid range"<<endl;
        return;
    }
    if(n>=1) cout<<"1"<<" ";
    if(n>=2) cout<<"2"<<" ";
    for(int j=3;j<=n;j++){
        bool isPrime = true;       // Assume j is prime
        for (int i = 2; i <= sqrt(j); i++) {  // Loop up to sqrt(j)
            if (j % i == 0) {
                isPrime = false;   // If any divisor found, it's not prime
                break;             // Exit the loop as j is not prime
            }
        }
        if (isPrime) {
            cout << j << " "; ;    
            }   
        }
    }

    
    


int main(){
    int n;
    cout<<"Enter a value of n : ";
    cin>>n;
    printprime1TN(n);
    return 0;
}