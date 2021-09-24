#include <iostream>
#include<iomanip>

using namespace std;

int main() {

    float x;
    cin>>x;
    cout<<fixed<<setprecision(2);

    if(x>=0 && x<=2000)
    {
        cout<<"Isento"<<endl;
    }

    if(x>=2000.01 && x<=3000)
    {
        float a=(x-2000)*.08;
        cout<<"R$ "<<a<<endl;
    }
     else if(x>=3000.01 && x<=4500)
    {
        float a=x-3000;
        float b=80+(a*.18);
        cout<<"R$ "<<b<<endl;
    }
    else if(x>4500)
    {
        float a=x-4500;
        float b=350+(a*.28);
        cout<<"R$ "<<b<<endl;


    }



    return 0;
}

