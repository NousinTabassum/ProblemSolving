#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    if(n%2==0 && (m-n)>=2)
    {
        cout<<n<<" "<<n+1<<" "<<n+2;
    }
    else if(n%2!=0 && m-n>=3)
    {

        cout<<n+1<<" "<<n+2<<" "<<n+3;
    }
    else
    {
        cout<<"-1";
    }
}
