#include<iostream>
using namespace std;
int main()
{
    int s,n,i,x[1000],y[1000],temp,j,c=0,temp2;
    cin>>s>>n;
    for(i=0; i<n; i++)
    {
        cin>>x[i]>>y[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(x[i]<x[j])
            {
                temp=x[i];
                temp2=y[i];
                x[i]=x[j];
                y[i]=y[j];
                x[j]=temp;
                y[j]=temp2;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        if(x[i]<s)
        {
            s=s+y[i];
            c++;
        }
    }
    if(c==n)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
