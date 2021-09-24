#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[100];
    cin>>s;
    int i,j,c=0;
    for(i=0; i<=strlen(s); i++)
    {
      for(j=0; j<i; j++)
      {
          if(s[i]==s[j])
          {
              c++;
              break;
          }
      }
    }
    if((strlen(s)-c)%2!=0)
    {
        cout<<"IGNORE HIM!";
    }
    else if((strlen(s)-c)%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
}
