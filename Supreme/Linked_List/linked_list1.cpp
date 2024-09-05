#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data=0;
        this->next=NULL;
    }

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    
};


void insertAtHead(Node* &head, Node* &tail,int data){
        if(head==NULL){
          Node* newNode=new Node(data);
          tail=newNode;
          head=newNode;  
          return;
        } 
        Node* newNode=new Node(data);
        newNode->next=head;
        if(head==NULL) tail=newNode;
        head=newNode;

    }

void insertAtTail(Node* &head,Node* &tail,int data){
        if(head==NULL){
          Node* newNode=new Node(data);
          tail=newNode;
          head=newNode;  
          return;
        } 
        Node* newNode=new Node(data);
        tail->next=newNode;
        tail=newNode;

    }


void printLL(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    Node* head=NULL;
    Node* tail = NULL;
    insertAtHead(head,tail,2);
    insertAtHead(head,tail,3);
    insertAtHead(head,tail,4);
    insertAtHead(head,tail,5);
     cout<<"Printing Linked List "<<endl;
    printLL(head);
    cout<<endl;
    insertAtTail(head,tail,1);
    printLL(head);
    

    
   
}