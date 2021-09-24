#include<iostream>
using namespace std;
int main()
{
    long long n,a,k;
    cin>>n>>k;
    while(k!=0)
    {
        a=n%10;
        if(a==0)
        {
            n=n/10;
        }
        else
        {
            n=n-1;
        }
        k--;

    }
    cout<<n;
}
