#include<iostream>
using namespace std;
int main()
{
    long long t,x,y,a,b,sum;
    cin>>t;
    while(t!=0)
    {
       cin>>x>>y>>a>>b;
       float b1=float(b)/2;
       sum=0;

       if(x>=y && a>=b1)
       {
           sum=sum+abs(x-y)*a+ abs(y)*b;
       }
       else if(x<y && a>=b1)
       {
           sum=sum+abs(y-x)*a+ abs(x)*b;
       }
       else
       {
           sum=sum+abs(x+y)*a;
       }
       cout<<sum<<endl;

       t--;
    }



}
