//code to insert a new data to the head

#include<iostream>
using namespace std;

class Node{
    public:
    int data; //data of the linked list node (both data and adress to the next pointer)
    Node* next;

    Node(int data){
        this -> data=data;
        this -> next=NULL;
    }
};

void insertatHead(Node* &head, int d){
    Node* temp=new Node(d); //create a new node with value d
    temp-> next=head; //new node -> old head
    head=temp; //move head to new node
}

void print (Node* &head){
    Node*temp =head;

    while(temp!= NULL){
        cout<< temp -> data << " ";
        temp =temp ->next;
    }
    cout<<endl;
}
int main(){
    //create a new node
    Node* node1= new Node(10);
    // cout<<node1 -> data<<endl;
    // cout<<node1 -> next<<endl;

    Node*head= node1;
    print(head);


    insertatHead(head, 15);
    print(head);
    return 0;
}