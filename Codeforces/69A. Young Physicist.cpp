#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int x=0,y=0,z=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>a[i];
            if(j==0)
            {
                x=x+a[i];
            }
            else if(j==1)
            {
                y=y+a[i];
            }
            else if(j==2)
            {
                z=z+a[i];
            }
        }
    }
    if(x==0 && y==0 &&z==0 )
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}

