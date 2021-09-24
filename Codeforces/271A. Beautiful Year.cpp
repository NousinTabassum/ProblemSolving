#include<iostream>
using namespace std;
int main()
{
    int x,i,a,b,c,d;
    cin>>x;
    do{x++;
    a=x%10;
    b=(x/10)%10;
    c=(x/100)%10;
    d=(x/1000)%10;

    if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
    {
        cout<<x;
        break;
    }}
    while(1);

}
