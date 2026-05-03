#include<bits/stdc++.h>
using namespace std;

class Node { 
    public:
    int data;
    Node* pre;  
    Node* next;

    Node(int d) {  
        data = d;  
        pre = nullptr;
        next = nullptr;
    }
};

Node* deleteatend(Node* head){
    if(head == nullptr){
        return nullptr;
    }
    if(head->next==nullptr){
        delete head;
        return nullptr;
    }
    Node* temp = head;
    while(temp->next!=nullptr){
        temp = temp->next;
    }
    temp->pre->next = nullptr;
    delete temp;
    return head;
   
}

void printlist(Node* head){
   for(Node* curr = head; curr!=nullptr;curr = curr->next){
    cout<<curr->data<<" ";
   }
   cout<<endl;
}

int main(){
    Node* head = new Node(10);
    head->next = new Node(20);  
    head->next->pre = head;
    head->next->next = new Node(30);
    head->next->next->pre = head->next;
    head->next->next->next = new Node(40);
    head->next->next->next->pre = head->next->next;
    cout<<"before deletion: ";
    printlist(head);

    head = deleteatend(head);

    cout<<"After deletion: ";
    printlist(head);

    return 0;
}