#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// LinkedList class
class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    // Insert at beginning
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    // Delete at beginning
    void deleteAtBeginning() {
        if (head == nullptr) {
            cout << "List is empty. Nothing to delete." << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    // Print the list
    void printList() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list;

    // Insert some nodes
    list.insertAtBeginning(10);
    list.insertAtBeginning(20);
    list.insertAtBeginning(30);

    cout << "Original list: ";
    list.printList();

    // Delete first node
    list.deleteAtBeginning();

    cout << "After deleting first node: ";
    list.printList();

    return 0;
}   