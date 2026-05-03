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

// delete a particular node (by value)
Node* deleteNode(Node* head, int value) {

    if (head == NULL) return head;

    // if head is to be deleted
    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* temp = head;

    // find node before target
    while (temp->next != NULL && temp->next->data != value) {
        temp = temp->next;
    }

    // delete if found
    if (temp->next != NULL) {
        Node* del = temp->next;
        temp->next = del->next;
        delete del;
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
    // manually creating list: 10 -> 20 -> 30
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    printList(head);

    head = deleteNode(head, 20);

    printList(head);

    return 0;
}