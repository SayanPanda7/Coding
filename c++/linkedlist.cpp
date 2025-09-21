#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node * ptr;
};
int main()
{
    struct Node * head;
    struct Node * one = NULL;
    struct Node * two = NULL;
    struct Node * three = NULL;
    one = new Node;
    two = new Node;
    three = new Node;
    one ->data=10;
    one ->data=15;
    one ->data=20;
    one ->ptr=two;
    one ->ptr=three;
    one ->ptr=NULL;
    head=one;
    while(head!=NULL)
    {
        cout<<head->data;
        head=head->ptr;
    }
    return 0;
}
