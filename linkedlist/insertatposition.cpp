#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

// insert at position (1-based index)
Node* insertAtPosition(Node* head, int value, int pos) {

    Node* newNode = new Node(value);

    // Case 1: insert at beginning
    if (pos == 1) {
        newNode->next = head;
        return newNode;
    }

    Node* temp = head;

    // go to node before position
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    // insert node
    if (temp != NULL) {
        newNode->next = temp->next;
        temp->next = newNode;
    }

    return head;
}

// print list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    // create list: 10 -> 20 -> 30
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    printList(head);

    head = insertAtPosition(head, 15, 2); // insert 15 at position 2

    printList(head);

    return 0;
}