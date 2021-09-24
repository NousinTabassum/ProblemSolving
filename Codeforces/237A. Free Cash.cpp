#include<iostream>
using namespace std;
int main()
{
    int n,i,j,c=1,mx=1;
    cin>>n;
    int h1,h2,m1,m2;
    cin>>h1>>m1;
    for(i=1; i<n; i++)
    {
        cin>>h2>>m2;
        if(h1==h2 && m1==m2)
        {
            c++;
            if(mx<c)
            {
                mx=c;
            }
        }
        else
        {
            c=1;
        }
        h1=h2;
        m1=m2;
    }
    cout<<mx;
}
