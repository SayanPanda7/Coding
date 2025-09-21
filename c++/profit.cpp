#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"enter cost price";
    cin>>cp;
    int sp;
    cout<<"Enter selling price";
    cin>>sp;
    if(sp>cp)
    {
        cout<<"profit price "<<sp-cp<<endl;
    }
    else if(sp<cp)
    {
    cout<<"loss price "<<cp-sp<<endl;
    }
   else
    {
   cout<<"no profit no loss";
    }
   }
    