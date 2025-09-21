#include<iostream>
using namespace std;
int main ()
{
    int a=5;
    int b=6;
    int *p = &a;int c=b;
    cout<<a<<" "<<b<<" "<<c;
    cout<<*p;
    a=10;
    b=20;
    cout<<a<<b<<c<<*p;
    cout<<"address of variablea:";
    cout<<&a;
    return 0;
}