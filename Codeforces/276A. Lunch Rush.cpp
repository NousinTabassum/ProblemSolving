#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long k,f[n],t[n],i;
    cin>>k;
    vector<int>v;
    for(i=0; i<n; i++)
    {
        cin>>f[i]>>t[i];
        if(t[i]<=k)
        {
            v.push_back(f[i]);
        }
        else
        {
            f[i]=f[i]-(t[i]-k);
            v.push_back(f[i]);
        }
    }
    cout<<*max_element(v.begin(),v.end());
}
