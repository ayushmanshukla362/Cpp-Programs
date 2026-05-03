#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // constructor
    Node(int value) {
        data = value;
        next = NULL;
    }
};

// your function
Node* insertAtBeginning(Node* head, int value) {
    Node* newNode = new Node(value); // Create new node
    newNode->next = head;            // Link to old head
    head = newNode;                 // Update head
    return head;
}

// print function
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

    head = insertAtBeginning(head, 30);
    head = insertAtBeginning(head, 20);
    head = insertAtBeginning(head, 10);

    printList(head);

    return 0;
}