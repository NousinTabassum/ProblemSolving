#include <iostream>

using namespace std;

int main() {

  int n,i,a=0;

  for(i=0; i<5; i++)
  {
      cin>>n;
      if(n%2==0)
      {
          a++;
      }
  }
  cout<<a<<" valores pares"<<endl;

    return 0;
}
