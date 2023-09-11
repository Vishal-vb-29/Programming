#include<iostream>
using namespace std;
class Stack{
    public:
    int* arr;
    int top;
    int size;

    Stack(int size){
        arr=new int[size];
        this->size=size;
        top=-1;
    }
    void push(int data){
         if(size-top>1){
            top++;
            arr[top]=data;
         }
         else{
            //space  not available
             cout<<"Stack Overflow"<<endl;
         }
    }
    void pop(){
        if(top==-1) cout<<"Stack Underflow"<<endl;
        else top--;
    }
    int getTop(){
        if(top==-1) cout<<"Stack empty";
        else cout<<arr[top];
    }
    int getSize(){
        return top+1;
    }
    bool isEmpty(){
        if(top==-1) return true;
        else return false;
    }   

};
int main(){
    Stack s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(70);
    s.getTop();
}