#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};
class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = NULL;
    }
    void append(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void printList() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    void findMiddle() {
        if (head == NULL) {
            cout << "List is empty!" << endl;
            return;
        }

        Node* slow = head;
        Node* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        cout << "Middle Element: " << slow->data << endl;
    }
};
int main() {
    LinkedList ll;
    ll.append(10);
    ll.append(20);
    ll.append(30);
    ll.append(40);
    ll.append(50);
    cout << "Linked List: ";
    ll.printList();
    ll.findMiddle();

    return 0;
}
