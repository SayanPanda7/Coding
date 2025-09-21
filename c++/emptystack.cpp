#include <iostream>
using namespace std;
int mystack[5], top = -1, n = 5;
void isEmpty() {
    if (top == -1)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}
void push(int value) {
    if (top == n - 1) {
        cout << "Stack Overflow" << endl;
    } else {
        top++;
        mystack[top] = value;
    }
}
void pop() {
    if (top == -1) {
        cout << "Stack Underflow" << endl;
    } else {
        mystack[top] = 0;
        top--;
    }
}
void display() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << mystack[i] << " ";
        }
        cout << endl;
    }
}
int main() {
    push(5);
    push(20);
    push(40);
    display(); 
    pop();
    pop();
    display();  
    isEmpty();  
    pop();
    isEmpty();  
    return 0;
}
