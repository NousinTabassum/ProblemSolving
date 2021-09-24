#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    char a[r][c];
    int p=0,n;
    for(int i=0; i<r; i++)
    {
        n=0;
        for(int j=0; j<c; j++)
       {
           cin>>a[i][j];
           if(a[i][j]=='S')
           {
             n++;
           }

       }
       if(n==0)
       {
           p++;
       }
    }
   // cout<<p<<endl;
    int q=0;
    for(int i=0; i<c; i++)
    {
        n=0;
        for(int j=0; j<r; j++)
        {
           if(a[j][i]=='S')
           {
             n++;
           }
        }
        if(n==0)
        {
            q++;
        }
    }
    //cout<<q<<endl;
    cout<<(p*c)+(q*r)-(p*q);

}
