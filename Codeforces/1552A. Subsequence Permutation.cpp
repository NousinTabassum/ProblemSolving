
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t!=0)
    {
        cin>>n;
        string s1,s2;
        cin>>s1;
        s2=s1;
        sort(s2.begin(),s2.end());
        int c=0;

        for(int i=0; i<n; i++)
        {
            if(s1[i]!=s2[i])
            {
                c++;
            }
        }
        cout<<c<<endl;
        t--;
    }
}
