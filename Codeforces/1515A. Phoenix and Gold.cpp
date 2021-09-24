#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,b;
    cin>>t;
    while(t!=0)
    {
        cin>>n>>x;
        int a[n];
        int sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }

        if(sum==x)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            sort(a,a+n);
            sum=0;
            for(int i=0; i<n; i++)
            {
                sum=sum+a[i];
                if(sum==x)
                {
                    swap(a[i],a[i+1]);
                }
                cout<<a[i]<<" ";
            }
        }
        cout<<endl;
       t--;
    }
}
