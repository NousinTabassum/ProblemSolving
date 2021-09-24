#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int c=0,d;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(i>0 && i<n)
        {
            d=abs(a[i]-a[i-1]);
            if(d>c)
            {
                c=d;
            }
        }
    }
    d=0;
    int s=abs(a[0]-a[n-1]);
    for(int i=1; i<n-1; i++)
    {
        d=abs(a[i-1]-a[i+1]);
       {
           if(d<s)
           {
               s=d;
           }
       }

    }
    cout<<max(s,c);
}
