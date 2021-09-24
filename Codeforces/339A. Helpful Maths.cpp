#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int n=s.length();
    int m=n/2;
    for(int i=m; i<n-1; i++)
    {
        cout<<s[i]<<"+";
    }
    cout<<s[n-1];
}
