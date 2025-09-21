#include<iostream>
using namespace std;
int main()
{
int n, a[50], min, temp, p, i, j, k, f;
cout<<" How many elements you want to enter : ";
cin>>n; 
cout<<"\n enter the elements \n";
for(int i=0;i<n;i++)
cin>>a[i];
for(k=0;k<n-1;k++){	
	f=0;
	min=a[k];
	for(j=k+1;j<n;j++)  {
	    if(min>a[j])    {
		min=a[j];
		p=j;
		f=1;
	   }
                 }
	if(f==1){
		temp=a[k];
		a[k]=min;
		a[p]=temp;
	}
}
cout<<"\n Sorted array is as \n";
for(i=0;i<n;i++)
cout<<a[i]<<"\t";
return 0; 
    }