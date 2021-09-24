#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if(n>=0)
    {
        cout<<n;
        return 0;
    }
    else
    {
        int a=abs(n%10);
        n=n/10;
        int b=abs(n%10);
        if(a>=b)
        {
            cout<<n;
        }
        else
        {
            n=n/10;
            cout<<(n*10)-a;
        }
    }
}
