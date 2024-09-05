#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *previous;
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->previous=NULL;
    }
    int insertatHead(Node &head){
        s
    }
};
int main()
{
    Node *node1=new Node(30);
    Node *node2=new Node(40);
    node1->previous=NULL;
    node1->next= node2;
    node2->previous= node1;
    node2->next=NULL;
    cout<<node1->data<<" ";
    cout<<node2->data<<" ";
    return 0;
}