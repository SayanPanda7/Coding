#include <iostream>
using namespace std;

int mystack[5], top = -1, n = 5;

void push(int val) {
    if (top >= n - 1) {
        cout << "Stack is overflow" << endl;
    } else {
        top++;
        mystack[top] = val;
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack is underflow" << endl;
    } else {
        top--;
    }
}

void display() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        for (int i = 0; i <= top; i++)
            cout << mystack[i] << " ";
        cout << endl;
    }
}

int main() {
    push(5);
    push(20);
    push(40);
    display();  // Output: 5 20 40

    pop();
    display();  // Output: 5 20

    pop();
    display();  // Output: 5

    return 0;
}
