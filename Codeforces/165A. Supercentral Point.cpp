#include<iostream>
using namespace std;
int main()
{
    int n,i,j,x[1005],y[1005],k=0,c,d,e,f;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x[i]>>y[i];
    }
     for(i=0; i<n; i++)
    {
        c=0,d=0,e=0,f=0;
       for(j=0; j<n; j++)
       {
           if(x[j]>x[i] && y[j]==y[i] )
           {
               c=1;
           }
           else if(x[j]<x[i] && y[j]==y[i] )
           {
               d=1;
           }
           else if(x[j]==x[i] && y[j]>y[i] )
           {
               e=1;
           }
           else if(x[j]==x[i] && y[j]<y[i] )
           {
               f=1;
           }
       }
       if(c==1 && d==1 && e==1 && f==1)
       {
           k++;
       }
    }
    cout<<k;
}
