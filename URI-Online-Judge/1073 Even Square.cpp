#include <iostream>
#include<cmath>
using namespace std;

int main() {

    int n,i , a;
    cin>>n;

    for(i=2; i<=n; i++)
{
    if(i%2==0)
    {
        a=pow(i,2.0);
        cout<<i<<"^2 = "<<a<<endl;
    }
}

    return 0;
}
