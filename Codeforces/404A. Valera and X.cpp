#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n][n];
    int c=0,d=0;
    char p,q;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];

             p=a[0][0];
             q=a[0][1];
            if(a[i][j]==p && j==i || a[i][j]==p && j==(n-i-1))
            {

                c++;
            }
            else if(a[i][j]==q)
            {
                d++;
            }
        }
    }
    if(c==((n*2)-1)&& d==(n*n)-(n*2-1) && p!=q)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
