#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

Node *insertPos(Node *head,int pos, int val){
    Node *newNode = new Node(val);
    if(pos == 1){
        newNode->next = head;
        return newNode;
    }
    Node *curr = head;
    for(int i=1; i<pos-1 && curr != nullptr; i++){
        curr = curr->next;
    }
    if(curr == nullptr){
        cout<<"Position out of bounds."<<endl;
        return head;
    }
    newNode->next = curr->next;
    curr->next = newNode;
    return head;
}

int main(){
    Node *head= new Node(1);
    head->next=new Node(2);
    head->next ->next=new Node(4);
    head->next ->next ->next=new Node(5);

}