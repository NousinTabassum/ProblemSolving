#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int n;
        cin>>n;
        long long a[n],b[n],i,s,k,z,p,q;

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }

        s=0;
        p=*min_element(a,a+n);
        q=*min_element(b,b+n);

        z=min(p,q);

       for(i=0; i<n; i++)
       {
           if(a[i]>p && b[i]>q)
           {
               k=max((a[i]-p),(b[i]-q));
               s=s+k;
           }
           else
           {
              if(a[i]>p)
           {
             s=s+(a[i]-p);
           }
            if(b[i]>q)
           {
               s=s+(b[i]-q);

           }
           }
          // cout<<s<<endl;

       }
       cout<<s<<endl;
       t--;
    }
}
