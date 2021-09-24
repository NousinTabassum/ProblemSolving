#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    int c=0,d=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
        if(a[i]<b[i])
        {
            c=1;
        }
        else if(a[i]>b[i])
        {
            d=1;
        }
    }
    if(c==1 && d==1)
    {
        cout<<"Happy Alex";
    }
    else
    {
        cout<<"Poor Alex";
    }
}
