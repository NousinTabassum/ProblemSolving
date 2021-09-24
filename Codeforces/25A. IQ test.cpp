#include<iostream>
using namespace std;
int main()
{
    int n,i,c=0,d=0,a[100];
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            c++;
        }
        else
        {
            d++;
        }
    }
    for(i=1; i<=n; i++)
    {
        if(c==1)
        {
            if(a[i]%2==0)
            {
                cout<<i;
            }
        }
        if(d==1)
        {
            if(a[i]%2!=0)
            {
                cout<<i;
            }
        }
    }
}
