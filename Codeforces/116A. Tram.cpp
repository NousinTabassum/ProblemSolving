#include<iostream>
using namespace std;
int main()
{
    int n,c=0,max=0,a,b,i;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a>>b;

        c=(c-a)+b;
        if(c>max)
        {
            max=c;
        }
    }
    cout<<max;
}
