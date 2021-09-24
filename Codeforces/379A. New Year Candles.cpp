#include<iostream>
using namespace std;
int main()
{
    int a,b,sum=0,c;
    cin>>a>>b;
    sum=sum+a;
    while(a>=b)
    {
        sum=sum+(a/b);
        a=(a/b)+(a%b);

    }
    cout<<sum;
}
