#include<iostream>
using namespace std;
class Stack{
    private:
    int* arr;
    int top1;
    int top2;
    int size;
    Stack(int data){
        
    }
    public:
    void push1(int data){
        if(top2-top1==1){
            cout<<"Stack Overflow";
        }
        else {
            top1++;
            arr[top1]=data;
        }
    }
    void push2(){
        if(top2-top1==1){
           cout<<"Stack Overflow";
        }
        else {
             top2--;
            arr[top2]=data;
        }
    }
    void pop1(){
        if(top1==-1) cout<<"Stack Underflow in stack 1";
        else top1--;
    }
    void pop2(){
        if(top2==size) cout<<"Stack Underflow in stack 2";
        else top2++;
    }
    void getTop1(){
        if(top1==-1) cout<<"No Element";
        else {
            cout<<arr[top1];
        }
    }
    int getTop2(){
        if(top2==size) cout<<"No Element";
        else {
            cout<<arr[top2];
        }
    }
    bool isEmpty()
    

};