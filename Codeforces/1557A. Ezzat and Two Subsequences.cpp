#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t!=0)
    {
        cin>>n;
        long long a[n],i;
        double sum=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
       for(i=0; i<n-1; i++)
       {
           sum=sum+a[i];
       }
       sum=sum/(n-1);
       sum=a[n-1]+sum;
       printf("%.9lf",sum);
       cout<<endl;
       t--;
    }
}
