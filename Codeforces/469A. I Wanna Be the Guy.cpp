#include<iostream>
using namespace std;
int main()
{
    int n,a,b,p[1000],c=0,temp,i,j;
    cin>>n>>a;
    for(i=0; i<a; i++)
    {
        cin>>p[i];
    }
    cin>>b;
    for(i=a; i<a+b; i++)
    {
        cin>>p[i];
    }
    for(i=0; i<a+b; i++)
    {
        for(j=0; j<a+b; j++)
        {
          if(p[i]<p[j])
        {
            temp=p[i];
            p[i]=p[j];
            p[j]=temp;
        }
        }

    }
   for(i=0; i<a+b; i++)
    {
        if(p[i]!=p[i+1])
        {
            c++;
        }

    }
    if(c==n)
    {
        cout<<"I become the guy.";
    }
    else
    {
        cout<<"Oh, my keyboard!";
    }
}
