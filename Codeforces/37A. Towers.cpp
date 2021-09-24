#include<iostream>
using namespace std;

void bubble_sort(int a[],int n)
{
    int i,j,temp;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n,i;
    cin>>n;
    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    bubble_sort(a,n);
    int c=0,d=1,m=0;
    for(i=0; i<n; i++)
    {

        if(a[i]!=a[i+1])
        {
            d=1;
            c++;
        }
        else
        {
            d++;
        }
        if(d>m)
        {
           m=d;
        }
    }
    cout<<m<<" "<<c<<endl;
}
