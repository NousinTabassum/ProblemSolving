#include <iostream>

using namespace std;

int main() {

   int i,n,x[10000],a=0,b=0;
   cin>>n;

   for(i=0; i<n; i++)
   {
      cin>>x[i];
   }
    for(i=0; i<n; i++)
   {
      if(x[i]>=10 && x[i]<=20)
      {
          a++;
      }
      else
      {
          b++;
      }
   }
   cout<<a<<" in"<<endl;
   cout<<b<<" out"<<endl;


    return 0;
}
