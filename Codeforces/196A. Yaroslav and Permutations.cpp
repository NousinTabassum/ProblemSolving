#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        v.push_back(count(a,a+n,a[i]));
    }
    int p=*max_element(v.begin(),v.end());
    if(p<=((n+1)/2))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

}
