#include <iostream>

using namespace std;

int main() {

    int a,b,c;
    cin>>a>>b;

    if(a>=0 && a<=23 && b>=0 &&b<=23)
    {
        if(a>=b)
         {
        c=(24-a)+b;
        cout<<"O JOGO DUROU "<<c<<" HORA(S)"<<endl;
         }
         else
         {
             c=b-a;
              cout<<"O JOGO DUROU "<<c<<" HORA(S)"<<endl;

         }

    }

    return 0;
}

