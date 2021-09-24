#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[100],b[100];
    cin>>a>>b;
    int i,j,c=0;


    for(i=0; i<strlen(a); i++)
    {
        for(j=0; j<strlen(b); j++)
            if(i==j)
        {

        {
            if(a[i]==b[j])
            {
                cout<<"0";

            }
            else if(a[i]!=b[j])
            {
                cout<<"1";

            }

        }
        }
    }

}
