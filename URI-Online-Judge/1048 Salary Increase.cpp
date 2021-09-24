
#include <iostream>
#include<iomanip>

using namespace std;

int main() {

    float x,y,z;
    cin>>x;
    cout<<fixed<<setprecision(2);
    if(x>=0 && x<=400)
    {
        y=x+(x*.15);
        z=y-x;
        cout<<"Novo salario: "<<y<<endl;
        cout<<"Reajuste ganho: "<<z<<endl;
        cout<<"Em percentual: 15 %"<<endl;
    }
    else if(x>=400.01 && x<=800)
    {
        y=x+(x*.12);
        z=y-x;
        cout<<"Novo salario: "<<y<<endl;
        cout<<"Reajuste ganho: "<<z<<endl;
        cout<<"Em percentual: 12 %"<<endl;
    }
     else if(x>=800.01 && x<=1200)
    {
        y=x+(x*.10);
        z=y-x;
        cout<<"Novo salario: "<<y<<endl;
        cout<<"Reajuste ganho: "<<z<<endl;
        cout<<"Em percentual: 10 %"<<endl;
    }
     else if(x>=1200.01 && x<=2000)
    {
        y=x+(x*.07);
        z=y-x;
        cout<<"Novo salario: "<<y<<endl;
        cout<<"Reajuste ganho: "<<z<<endl;
        cout<<"Em percentual: 7 %"<<endl;
    }
     else if(x>2000)
    {
        y=x+(x*.04);
        z=y-x;
        cout<<"Novo salario: "<<y<<endl;
        cout<<"Reajuste ganho: "<<z<<endl;
        cout<<"Em percentual: 4 %"<<endl;
    }

    return 0;
}
