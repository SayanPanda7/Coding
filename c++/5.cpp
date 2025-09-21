#include<iostream>
using namespace std;
int main ()
{
    int a[20],n,i,j,key;
    cout<<" Enter size of array :";
    cin>>n;
    cout<<"Enter elements in array :";
    for (i=0;i<n;i++)
    cin>>a[i];
    cout<<"Elements in array :";
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    for (i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while ((a[j]>key)&&(j>=0))
        {
            a[j+1]=a[j];
            j--;
        }
        a[j=1]=key;
        }
        cout<<"After sorting the array is :";
        for(i=0;i<n;i++)
        cout<<a[i]<<" ";
        return 0;
    }