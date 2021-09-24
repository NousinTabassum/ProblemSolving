#include <iostream>

using namespace std;

int main() {

  int x,i;
  cin>>x;

  for(i=x; i<=x+11; i++)
  {
      if(i%2!=0)
      {
          cout<<i<<endl;
      }
  }

    return 0;
}

