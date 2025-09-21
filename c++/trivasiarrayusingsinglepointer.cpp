#include<iostream>
using namespace std;
int main()
{
    int a[5]={11,12,13,14,15};
    int*p;
    p=&a[5];
    cout<<*p;
    cout<<*(p+5);
}