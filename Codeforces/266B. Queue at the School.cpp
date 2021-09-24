#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,t,i,j;
    char temp;
    cin>>n>>t;
    char s[100];
    cin>>s;

    for(i=1; i<=t; i++)
    {

        for(j=0; j<=strlen(s); j++)
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
               s[j]='G';
               s[j+1]='B';
               j++;

            }

        }
    }
    cout<<s;
}
