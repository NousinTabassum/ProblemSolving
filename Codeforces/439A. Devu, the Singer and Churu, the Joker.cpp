#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,t=0;
    cin>>n>>d;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        t=t+a[i];
    }
    int T=t+((n-1)*10);
    if(d<T)
    {
        cout<<-1<<endl;
        return 0;
    }
    else
    {
        cout<<((d-T)/5)+((n-1)*10)/5<<endl;
    }
}
