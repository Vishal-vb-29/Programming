#include<iostream>
#include<deque>
using namespace std;

class Deque{
    public:
    int *arr;
    int rear;
    int front;
    int sizee;

    Deque(int sizee){
        arr=new int[sizee];
        front=rear=-1;
    }
    void push(int data){
        if(front==0 && rear==sizee-1){
            cout<<"Queue is full Cannot insert"<<endl;
        }else if(front==-1){
            front=rear=0;
            arr[rear]=data;
        }else if(front!=0 && rear==sizee-1){
            rear=0;
            arr[rear]=data;
        }    
        else{
            rear++;
            arr[rear]=data;
        }
    }

    

    void pushFront(int data){
        if(front==0 && rear==sizee-1){
            cout<<"Q is full, Cannot Insert"<<endl;
            return;
        }else if(front==-1){
            front=rear=0;
        }else if(front==0 && rear!=sizee-1){
            front=sizee-1;
        }else front --;
        arr[front]=data;
    }

    void pushRear(int data){
        if(front==0 && rear==sizee-1){
            cout<<"Q is Full, cannot insert"<<endl;
            return;
        }else if(rear==sizee-1 && front != 0){
            rear=0;
        }else if(rear==-1){
            rear=front=0;
        }else {
            rear++;
        }
        arr[rear]=data;
    }


    void popFront(){
        if(front==-1){
            cout<<"Q is empty,cannot pop"<<endl;
            return;
        }else if(front==rear){
            arr[front]=-1;
            front=-1;
            rear=-1;
        }else if(front==sizee-1){
            front=0;
        }else front++; 
    }

    void popRear(){
        if(front==-1){
            cout<<"Q is Empty, cannot pop"<<endl;
            return;
        }else if(front==rear){
            front=rear=-1;
        }else if(rear==0 && front!= sizee-1){
            rear=sizee-1;
        }else rear--;
        
    }


    void pop(){
        if(front==-1) cout<<"Cannot remove, Queue is empty"<<endl;
        else if(rear==front){
            arr[rear]=0;
            rear=front=-1;
        }else if(front==sizee-1){
            front=0;
        }else front++;
    }


};

int main(){
    Deque q(5);
    q.pushFront(10);
    q.pushRear(15);
    q.pushRear(20);
    q.pushRear(25);
    q.pushRear(30);
    q.popRear();
    q.popRear();
    
    return 0;
}