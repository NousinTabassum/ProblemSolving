#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    long long a[n],i,j;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    std::sort(a,a+n);
    if(k==0)
    {
        if(a[0]>1)
        {
            cout<<a[0]-1;
            return 0;
        }
        else
        {
            cout<<"-1";
            return 0;
        }
    }
    for(i=k-1; i<k; i++)
    {

       if(a[k-1]!=a[k] )
       {
           cout<<a[k-1];
       }
       else
       {
           cout<<"-1"<<endl;
       }
    }

}
