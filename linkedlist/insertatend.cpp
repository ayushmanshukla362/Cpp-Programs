#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    2
    Node(int value) {
        data = value;
        next = NULL;
    }
};

// insert at end
Node* insertAtEnd(Node* head, int value) {
    Node* newNode = new Node(value);

    // if list empty
    if (head == NULL) {
        return newNode;
    }

    Node* temp = head;

    // go to last node
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode; // attach at end
    return head;
}

// print list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
}      




int main() {
    Node* head = NULL;

    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);

    printList(head);

    return 0;
}