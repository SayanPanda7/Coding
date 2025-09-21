#include<iostream>
using namespace std;
class student{
    private:
    char name[10];
    int rn;
    float marks;
    public:
    void input(){
        cout<<"enter name,marks,roll number "<<endl;
        cin>>name>>rn>>marks;
    }
    void output(){
        cout<<endl<<name<<" "<<rn<<" "<<marks<<" ";
    }
};
int main(){
    student s1;
    s1.input();
    s1.output();
    return 0;
}