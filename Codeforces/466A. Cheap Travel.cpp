#include<iostream>
using namespace std;
int main()
{
    int m,n,a,b,sum=0,m_r;
    cin>>n>>m>>a>>b;
    float m1=b/m;
    if(m1>=a)
    {
        sum=sum+a*n;
    }
    else
    {
        m_r=n/m;
        sum=sum+m_r*b;
        n=n-(m_r*m);
        if(b>=a*n)
        {
            sum=sum+(a*n);
        }
        else
        {
            sum=sum+b;
        }
    }
    cout<<sum;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{

}

