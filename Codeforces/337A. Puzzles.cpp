#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,d;
    cin>>n>>m;
    int x=m-n+1;
    int a[m];
    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);
    int p=a[m-1]-a[0];
    for(int i=0; i<x; i++)
    {
       d=abs(a[i]-a[i+n-1]);
       if(d<p)
       {
           p=d;
       }

    }
    cout<<p;
}

