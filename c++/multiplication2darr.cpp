#include<iostream>
using namespace std;
int main(){
    int a[2][2]={1,2,3,4};
    int b[2][2]={11,12,13,14};
    int c[2][2],i,j,k;
    for (i = 0; i < 2; i++)
        {
            for (j=0;j<2;j++)
            {
                for (k=0;k<2;k++)
                {
                    c[i][j]=a[i][j]+a[i][k]*b[k][j];
                }
            }
        }
        for (i = 0; i < 2; i++)
        {
            for (j=0;j<2;j++)
            {
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
        }