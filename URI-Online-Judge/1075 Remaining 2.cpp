#include <iostream>

using namespace std;

int main() {

    int n,i,a;
    cin>>n;

    for(i=0; i<=10000; i++)
    {
        if(i%n==0)
        {
            a=i+2;
            cout<<a<<endl;
        }
    }

    return 0;
}

