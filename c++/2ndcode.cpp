#include<iostream>
using namespace std;
int nthterm (int n,int t1,int t2,int t3)
{
    if (n==1)
    return t1;
    if(n==2)
    return t2;
    if(n==3)
    return t3;
    return nthterm (n-1,t1,t2,t3)+ nthterm (n-2,t1,t2,t3)+ nthterm(n-3,t1,t2,t3);
}
int main ()
{
    int n=5;
    int a = nthterm (n,10,5,2);
    cout<<"nth term is "<<a;
    return 0;
}