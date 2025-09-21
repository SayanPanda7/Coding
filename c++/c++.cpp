#include<iostream>
using namespace std;
class details
{
    int marks,rn;
    char name[];
    public:
    void input()
    {
        cout<<"enter name,marks,roll number";
        cin>>name>>marks>>rn;
    }
    void output()
    {
        cout<<name<<marks<<rn;
    }

};
int main()
{
    details s;
    s.input();
    s.output(); 
    return 0; 
}