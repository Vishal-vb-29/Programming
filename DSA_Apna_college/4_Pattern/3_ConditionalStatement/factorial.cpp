// Homework
// Print factorial of a number N

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

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int fact=factorialN(n);
    cout<<"The factorial of a number "<<n<<" is : "<<fact<<endl;
    return 0;
}