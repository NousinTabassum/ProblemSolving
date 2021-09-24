#include <iostream>
#include<iomanip>
using namespace std;

int main() {

   float a,b,c,para,area;
   cin>>a>>b>>c;
   cout<<fixed<<setprecision(1);

   if((a+b)<=c ||(a+c)<=b || (c+b)<=a)
   {
       area=.5*c*(a+b);
       cout<<"Area = "<<area<<endl;
   }
   else
   {
       para=a+b+c;
       cout<<"Perimetro = "<<para<<endl;


   }

    return 0;
}

