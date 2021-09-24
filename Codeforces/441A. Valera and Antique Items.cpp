#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,v;
   cin>>n>>v;
   int a[n];
   vector<int>v1;
   for(int i=0; i<n; i++)
   {
       cin>>a[i];
       int m=a[i];
       int b[m];
       for(int j=0; j<m; j++)
       {
           cin>>b[j];

       }
       int p=*min_element(b,b+m);
       //cout<<p<<endl;
       if(p<v)
       {
           v1.push_back(i+1);
       }
       p=0;

   }
   cout<<v1.size()<<endl;
   for(int i=0; i<v1.size(); i++)
   {
       cout<<v1[i]<<" ";
   }
}
