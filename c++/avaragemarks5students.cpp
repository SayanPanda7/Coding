#include<iostream>
using namespace std;
class marks{
    int m1,m2,m3,m4,m5;
    float avg;
public:
void input(){
cout << "enter marks of 5 subjects";
cin>>m1>> m2>> m3>>m4>> m5;
}
void average (){
avg = (m1+m2+m3+m4+m5)/5;
cout << avg;
}
};
int main() {
marks P;
P.input();
P.average();
} 