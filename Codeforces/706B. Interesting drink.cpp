#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,b,j,q;
    cin>>n;
    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    std::sort(a,a+n);
    cin>>q;

    for(j=0; j<q; j++)
    {
        cin>>b;
        b=upper_bound(a,a+n,b)-a;
        cout<<b<<endl;

    }
}
