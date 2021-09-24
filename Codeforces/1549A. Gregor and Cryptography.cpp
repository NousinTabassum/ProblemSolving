#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    long long n;
    while(t!=0)
    {
        cin>>n;
        if(n==5)
        {
            cout<<2<<" "<<4<<endl;
        }
        else{
        a=2;
        b=n/2;
        cout<<a<<" "<<b<<endl;
        }
        t--;
    }
}

