#include<iostream>
using namespace std;
int main()
{
    int n,i,m=0,j,c;
    char a,b,p,q;
    string s;
    cin>>n>>s;
    for(i=0;i<n; i++)
    {
        a=s[i];
        b=s[i+1];
        c=0;
        for(j=i; j<n; j++)
        {
            if(s[j]==a && s[j+1]==b)
            {
                c++;
            }
        }
        if(c>m)
        {
            m=c;
            p=a;
            q=b;
        }
    }
    cout<<p<<q;
}
