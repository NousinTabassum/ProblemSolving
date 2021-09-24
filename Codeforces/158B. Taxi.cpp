#include<iostream>
using namespace std;
int main()
{
    int n,x,c=0,d=0,e=0,f=0;
    cin>>n;
    while(n!=0)
    {
        cin>>x;
       if(x==4)
       {
           c++;
       }
       else if(x==3)
       {
           d++;
       }
       else if(x==2)
       {
           e++;
       }
       else if(x==1)
       {
           f++;
       }
       n--;

    }
   // cout<<c<<d<<e<<f<<endl;
    c=c+d+(e/2);
    if(e%2==0)
    {
        e=0;
    }
    else
    {
        e=2;
    }

    if(f>d)
    {
        f=f-d;
    }
    else
        f=0;
    int t=f+e;
    //cout<<f;
    c=c+(t/4);
   // cout<<c;

    if(t%4==0)
    {
        cout<<c<<endl;
    }
    else
    {
        cout<<c+1<<endl;
    }




}
