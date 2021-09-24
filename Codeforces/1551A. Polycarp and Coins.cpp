#include<iostream>
using namespace std;
int main()
{
    long long n;
   int t;
   cin>>t;
   while(t!=0)
   {
       cin>>n;
       if(n%3==0)
       {
           cout<<n/3<<" "<<n/3<<endl;
       }
       else if(n%3==1)
       {
           cout<<n/3+1<<" "<<n/3<<endl;
       }
       else if(n%3==2)
       {
           cout<<n/3<<" "<<n/3+1<<endl;
       }
       t--;
   }
}
