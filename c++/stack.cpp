#include<iostream>
using namespace std;
int mystack[5],top=-1,n=5;
void push(int val)
{
    if(top>=n-1)
    {
        cout<<"Stack is over flow"<<endl;
    } 
    else{
        top++;
       mystack[top]=val;
    }
}
void pop()
{
    if(top==-1)
    {
        cout<<"Stack is under flow"<<endl;

    }
    else{
        mystack[top]=0;
        top--;
    }
    }
    void display(){
        for(int i=0;i <= top; i++)
        cout<<mystack[i]<<" ";
    }
    int main()
    {
        push (5);
        push(20);
        push(40);
        pop();
        pop();
    }
    