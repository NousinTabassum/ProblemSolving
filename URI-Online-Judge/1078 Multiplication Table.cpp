#include <iostream>

using namespace std;

int main() {

    int i,N,a;
    cin>>N;
if(N>1 && N<1000)
   {
        for(i=1; i<=10; i++)
    {
        a=i*N;
        cout<<i<<" x "<<N<<" = "<<a<<endl;
    }
   }
    return 0;
}

