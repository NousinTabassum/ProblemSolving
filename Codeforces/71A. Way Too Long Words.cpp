#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        string s;
        cin>>s;
        int m=s.length();
        if(m<=10)
        {
            cout<<s<<endl;
        }
        else
        {
           cout<<s[0]<<m-2<<s[m-1]<<endl;
        }
        t--;

    }
    return 0;
}
