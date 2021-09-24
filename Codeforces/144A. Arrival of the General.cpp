#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,c,d;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];

    }
     p=*min_element(a,a+n);
     q=*max_element(a,a+n);
    for(int i=0; i<n; i++)
    {
        if(a[i]==p)
        {
            c=i;
        }
    }
     for(int i=n-1; i>=0; i--)
    {
        if(a[i]==q)
        {
            d=i;
        }
    }

    if(c<d)
    {
        cout<<(n-1)-c+d-1<<endl;
    }
    else
    {
         cout<<(n-1)-c+d<<endl;
    }

}
