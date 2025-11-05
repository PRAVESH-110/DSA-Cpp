//code to insert a new data to the head
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node (int data){
        this-> data=data;
        this -> next=NULL;
    }
};

void insertAtTail(Node* &tail, int d){
    Node* temp =new Node(d);

    //set the next (next part of node as temp)
    tail-> next=temp;
    tail =temp;
}

void print (Node* head){
    Node * temp= head;

    while(temp!=NULL){
        cout << temp->data << " -> ";
        temp=temp->next;
    }
    cout << "NULL" << endl;
}

int main(){
    Node *node1= new Node(10);

    Node*head =node1;
    Node*tail= node1;

    insertAtTail(tail, 20); // another tail insert
    print(head);

    return 0;
}