#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    cin>>n>>c;
    int a[n];
    int p,q=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(i>0 && i<n)
        {
            p=a[i-1]-a[i];
            if(p>q)
            {
                q=p;
            }
        }
    }
    if(q-c>0)
    {
        cout<<q-c;
    }
    else
    {
        cout<<"0";
    }


}
