#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    string s1,s2;
    while(t!=0)
    {
        cin>>n;
        cin>>s1>>s2;
        int c=0;
        for(int i=0; i<s2.length(); i++)
        {
            if(s2[i]=='1')
            {
                if(s1[i]=='0')
                {
                    c++;
                }
                else if(s1[i-1]=='1' && i-1>=0)
                {
                    c++;
                    s1[i-1]=2;
                }
                else if(s1[i+1]=='1' && i+1<n)
                {
                    c++;
                    s1[i+1]=2;
                }
            }

        }
        cout<<c<<endl;
        t--;

    }
}
