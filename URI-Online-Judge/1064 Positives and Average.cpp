#include<iostream>
#include<iomanip>
using namespace std;

int main(){
 double n,sum=0,avg;
int i,a=0;
cout<<fixed<<setprecision(1);

for(i=0; i<6; i++)
{
    cin>>n;
    if(n>0)
    {
        a++;
        sum=sum+n;


    }

}
avg=sum/a;
cout<<a<<" valores positivos"<<endl;
cout<<avg<<endl;


return 0;
}


