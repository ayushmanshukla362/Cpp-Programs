#include <bits/stdc++.h>
using namespace std;
//single linked list node structure
class Node {
    public:
    int data;
    Node* next;
    //constructor to initialize a new node with data
    Node(int newData){
        this->data = newData;
        this->next = nullptr;
    }
};
int main(){
    //create the first node Head
    Node* head = new Node(10);
    // Link the second node
    head->next = new Node(20);
    //link the third node
    head->next->next = new Node(30);
    //link the fourth node
    head->next->next->next = new Node(40);
    //printing linked list
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
