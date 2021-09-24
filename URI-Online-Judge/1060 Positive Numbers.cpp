#include<iostream>
using namespace std;

int main(){
 double n;
int i,a=0;

for(i=0; i<6; i++)
{
    cin>>n;
    if(n>0)
    {
        a++;
    }

}
cout<<a<<" valores positivos"<<endl;


return 0;
}

