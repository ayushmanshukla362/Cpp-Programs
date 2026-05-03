#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node*next,*prev;
    Node (int new_data){
        data=new_data;
        next=prev=nullptr;
    }
};
// function to insert a node at the front of doubly linked list
Node*insertAtFront(Node*head,int new_data){
    //create a new node
    Node*new_node=new Node(new_data);
    //make next of new node as head 
    new_node->next=head;
    //change prev of head node to new node
    if(head!=nullptr)
        head->prev=new_node;
    return new_node;
}
//function to print the list in required format
void printList(Node*head){
    cout<<curr->data;
    while(curr!=nullptr){
        cout<<"<->";
    }
    curr=curr->next;
};
int main(){
    Node *head=new Node(2);
    head->next=new Node(3);
    head->next->prev=head;
    head->next->next=new Node(4);
    head->next->next->prev=head->next;
    //insert a new node at the front of the list
    

}