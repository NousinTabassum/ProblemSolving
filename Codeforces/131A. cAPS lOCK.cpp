#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
    char s[100];
    cin>>s;
    int i,c=0,d=0;

    for(i=0; i<=strlen(s); i++)
    {
        if(isupper(s[i]))
        {
            d++;
        }
    }

    for(i=1; i<=strlen(s); i++)
    {
        if(islower(s[i]))
        {
            c++;
        }
    }


    if(c==0 && islower(s[0]))
    {
        s[0]=toupper(s[0]);
        for(i=1; i<=strlen(s); i++)
    {
        s[i]=tolower(s[i]);

    }
      cout<<s;

    }
    else if(d==strlen(s))
    {
       for(i=0; i<strlen(s); i++)
       {
           s[i]=tolower(s[i]);
       }
       cout<<s;
    }
    else
    {
        cout<<s;
    }



}
 
