#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
   int a,b;
    int p=0,T=0,x;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
       T=T+(b-a+1);
       T=T+(a-p-1)%t;
       p=b;

    }
    cout<<T;
}
