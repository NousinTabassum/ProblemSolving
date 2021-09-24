#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int c=0,p=0;
    for(int i=0; i<s.length(); i++)
    {
        for(int j=p; j<t.length(); j++)
        {
            if(s[i]==t[j])
            {
                c++;
                p=j+1;
                break;
            }
            if(j==t.length()-1)
            {
               cout<<c+1;
               return 0;
            }
        }
    }
    cout<<c+1;
}
