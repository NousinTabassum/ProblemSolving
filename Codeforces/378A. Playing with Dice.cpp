#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int c=0,d=0,e=0;
    for(int i=1; i<=6; i++)
    {
        if(abs(a-i)<abs(b-i))
        {
            c++;
        }
        else if(abs(a-i)>abs(b-i))
        {
            d++;
        }
       else if(abs(a-i)==abs(b-i))
        {
            e++;
        }
    }
    cout<<c<<" "<<e<<" "<<d;
}
