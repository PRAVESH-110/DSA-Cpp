//delete a node at any position
#include<iostream>
using namespace std;

class Node{
    public:
    int data; 
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

};
void deleteNode(int position, Node* &head, Node *& tail){
    //We store the current head in temp.Move head one step forward.Break the old head’s link.
    //Free the memory (delete temp).
    if(position ==1){
        Node *temp =head;
        head =head -> next;
        temp -> next=NULL;
        delete temp;
        return ;
    }

    Node* curr = head;
    Node* prev = NULL;
    int count = 1;

    while(count < position && curr != NULL) {
        prev = curr;
        curr = curr->next;
        count++;
    }
    //handle tail update if last node is deleted
    if(curr != NULL && curr->next == NULL)
        tail = prev;

    //link previous node to next node
    if(prev != NULL && curr != NULL)
        prev->next = curr->next;

    delete curr; // free memory
}
int main(){
    deleteNode(head, tail, 3);
    return 0;
}
