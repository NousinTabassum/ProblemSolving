#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long n,a;
    while(t!=0)
    {
        cin>>n;
        a=(n/10)*25;
        if(n>0 && n<6)
        {
            cout<<15<<endl;
        }
        else if(n%10==1 || n%10==2)
        {
            cout<<a+5<<endl;
        }
        else if(n%10==3 || n%10==4)
        {
            cout<<a+10<<endl;
        }
         else if(n%10==5 || n%10==6)
        {
            cout<<a+15<<endl;
        }
         else if(n%10==7 || n%10==8)
        {
            cout<<a+20<<endl;
        }
         else if(n%10==9)
        {
            cout<<a+25<<endl;
        }
        else if(n%10==0)
        {
            cout<<a<<endl;
        }
        t--;

    }
}
