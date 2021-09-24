#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
    return (a<b);
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int p,q,r,s,t,u;
    p=a+b+c;
    q=a*b*c;
    r=a+b*c;
    s=a*b+c;
    t=(a+b)*c;
    u=a*(b+c);
   cout<<max({p,q,r,s,t,u},cmp);
}
