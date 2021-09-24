#include<bits/stdc++.h>
using namespace std;
int main()
{
    int f,n;
    string s;
    cin>>f;
    while(f!=0)
    {
        cin>>n>>s;
        vector<int> t,m;

        for(int i=0; i<n; i++)
        {
            if(s[i]=='T')
            {
                t.push_back(i);
            }
            else
            {
                m.push_back(i);
            }
        }
        int c=0;
        if(m.size()*2!=t.size())
        {
            cout<<"NO"<<endl;

        }
        else
        {

            for(int i=0; i<m.size(); i++)
            {
                if(m[i]<t[i] || m[i]>t[i+m.size()])
                {
                   c=0;
                    break;
                }
                else
                    c++;
            }
        if(c==m.size())
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
        }
        f--;
    }
}
