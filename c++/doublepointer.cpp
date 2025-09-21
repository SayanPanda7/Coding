#include<iostream>
using namespace std;
int main ()
{
    int a=10;
    int *p=&a;
    int **ptr = &p;
    cout<<**ptr<<*p<<a;
    cout<<"address of variablea:";
    cout<<&a;
    return 0;
}