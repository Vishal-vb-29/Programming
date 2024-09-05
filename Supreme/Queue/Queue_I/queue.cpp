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
                rear=0;
            }
        }
         
    }

    int getFront(){
        if(front==rear){
            cout<<"Queue is Empty";
            return -1;
        }
        else return arr[front];
    }

    bool isEmpty(){
        if(rear==front) return true;
        else return false;
    }

    int getSize(){
        return rear-front;
    }
};

int main(){
    Queue q(10);
    q.push(5);
    q.push(15);
    q.push(25);
    q.push(35);
    cout<<q.getSize()<<endl;
    cout<<q.getFront()<<endl;
    q.pop();
    cout<<q.getFront()<<endl;
    cout<<q.getSize();

    return 0;
}