#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long l;
    float s;
    cin>>n>>l;
    s=log(l)/log(n);
   if(pow(n,int(s))==l)
   {
       cout<<"YES"<<endl;
       cout<<s-1;
   }
   else
   {
       cout<<"NO";
   }
}
