// Homework
// Sum of all numbers from 1 to N which are divisible by 3

#include<iostream>
using namespace std;
int sum1_N_Db3(int n){
    int sum=0;
    int i=1;
    while(i<=n){
        if(i%3==0) sum+=i;
        i++;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int sum=sum1_N_Db3(n);
    cout<<"The sum of number from 1 to N which are divisible by 3 is : "<<sum;
    return 0;
}