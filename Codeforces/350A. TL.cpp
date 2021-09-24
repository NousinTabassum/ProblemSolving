#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }
    sort(b,b+m);
    int p=max(2*a[0],a[n-1]);

    if(b[0]<=p)
    {
        cout<<"-1";
    }
    else
    {
        cout<<p;
    }
}
