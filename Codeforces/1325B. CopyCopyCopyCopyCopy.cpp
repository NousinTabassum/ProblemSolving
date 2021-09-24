#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int n,c;
        cin>>n;
        long long a[n],i;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        std::sort(a,a+n);

        for(i=0; i<n; i++)
        {
            if(a[i]!=a[i+1])
            {
                c++;
            }
        }
        cout<<c<<endl;
        c=0;
        t--;


    }
}
