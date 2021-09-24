#include<iostream>
using namespace std;
int main()
{
    long long n,a,m,b=0;
    cin>>n>>m;
    while(m!=0)
    {
        a=m%10;
        b=b*10+a;
        m=m/10;

    }
    cout<<n+b;

}
