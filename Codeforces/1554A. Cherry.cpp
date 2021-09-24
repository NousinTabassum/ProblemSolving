#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,prod,m;
    cin>>t;
    while(t!=0)
    {
        cin>>n;
        m=0;
        long long a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(i=0; i<n-1; i++)
        {
            prod=a[i]*a[i+1];
            if(prod>m)
            {
                m=prod;
            }
        }
        cout<<m<<endl;
        t--;
    }

}
