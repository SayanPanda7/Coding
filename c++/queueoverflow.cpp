#include <iostream>
using namespace std;
int arr[10], front = -1, rear = -1, sizess = 10;

void insert_queue(int val) {
    if (rear == sizess-1) {
        cout << "Queue overflow";
    } else {
        if (front == -1) {
            front++;
        }
        arr[++rear] = val;
    }
}
void delete_queue()
{
    if(front==-1)
    {
        cout<<"Underflow Queue";
    }
    else{
        arr[front]=0;
        front++;
    }
} 
void display() {
    for (int i = front; i <= rear; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    
    insert_queue(5);
    display();
    insert_queue(10);
    display();
    insert_queue(15);
    display();
    insert_queue(25);
    display();
    insert_queue(35);
    display();
    insert_queue(45);
    display();
    insert_queue(5);
    display();
    insert_queue(5);
    display();
    insert_queue(10);
    display();
    
    return 0;
}