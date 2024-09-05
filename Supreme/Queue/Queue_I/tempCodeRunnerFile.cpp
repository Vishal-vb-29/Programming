#include<iostream>
using namespace std;

class Queue{
    public:
    int *arr;
    int size;
    int rear;
    int front;

    Queue(int size){
        this->size=size;
        arr=new int[size];
        front=0;
        rear=0;
    }

    void push(int data){
        if(rear==size) cout<<"Queue is Full";
        else{
             arr[rear]=data;
             rear++;
        }
    }

    void pop(){
        if(front==rear) cout<<"Queue is Empty";
        else{
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;