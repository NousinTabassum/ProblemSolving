#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    if(n>1 && d==0)
    {
        cout<<"No solution";
    }
    else
    {
        cout<<d;
        for(int i=0; i<n-1; i++)
        {
            cout<<"0";
        }
    }
    return 0;
}
