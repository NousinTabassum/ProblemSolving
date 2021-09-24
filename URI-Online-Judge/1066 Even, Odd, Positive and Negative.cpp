#include <iostream>

using namespace std;

int main() {

   int n,i,a=0,b=0,c=0,d=0;

   for(i=0; i<5; i++)
   {
       cin>>n;
       {
           if(n%2==0)
           {
               a++;
           }
           else
           {
               b++;
           }

       }
       {
           if(n>0)
           {
               c++;
           }
           else if(n<0)
           {
               d++;
           }
       }
   }
   cout<<a<<" valor(es) par(es)"<<endl;
   cout<<b<<" valor(es) impar(es)"<<endl;
   cout<<c<<" valor(es) positivo(s)"<<endl;
   cout<<d<<" valor(es) negativo(s)"<<endl;
    return 0;
}
