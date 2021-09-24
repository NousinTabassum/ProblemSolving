#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,p,c=0;;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(i==k-1)
        {
            p=a[i];
        }
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]>=p && a[i]>0)
        {
            c++;
        }
    }
    cout<<c<<endl;
}
