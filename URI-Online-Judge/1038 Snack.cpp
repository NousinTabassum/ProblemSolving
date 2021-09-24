#include<iostream>
#include<iomanip>

using namespace std;


int main() {

    int x,y;
    float Price;
    cin>>x>>y;
    cout<<fixed<<setprecision(2);


    switch(x)
    {
        case 1:
            {
        Price=y*4.00;
        cout<<"Total: R$ "<<Price<<endl;
            }

        break;

        case 2:
       {
        Price=y*4.50;
        cout<<"Total: R$ "<<Price<<endl;
       }
        break;

        case 3:
       {
        Price=5.00*y;
        cout<<"Total: R$ "<<Price<<endl;
       }
        break;

        case 4:
       {
        Price=2.00*y;
        cout<<"Total: R$ "<<Price<<endl;
       }
        break;

        case 5:
        {
        Price=1.50*y;
        cout<<"Total: R$ "<<Price<<endl;
        }
        break;

        default:
        cout<<"not in the table"<<endl;

    }
    return 0;
}

