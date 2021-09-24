#include<iostream>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    int a[n],i,s;

    for(i=1; i<n; i++)
    {
        cin>>a[i];

    }
    for(i=1; i<n; i++)
    {
        s=i+a[i];
        if(s==t)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        else
        {
            i=s-1;
        }
    }
    cout<<"NO";
    return 0;
}
