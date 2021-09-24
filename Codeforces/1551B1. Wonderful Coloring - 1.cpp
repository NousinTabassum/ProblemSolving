#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        string s;
        int m;
        cin>>s;
        sort(s.begin(),s.end());
        m=s.length();
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]==s[i+1] && s[i+1]==s[i+2])
            {
                m=m-1;
            }
        }
        cout<<m/2<<endl;;
        t--;
    }
}
