#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,i,j;
    cin>>n;
    int a[n],b[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i]==b[j])
            {
                c++;
            }
        }
    }
    cout<<c<<endl;
}