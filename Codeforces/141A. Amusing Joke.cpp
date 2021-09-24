#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s,p,z;
    char temp;
    cin>>s>>p>>z;
    int i,c=0,j;
    string q=s+p;

    for(i=0; i<q.length(); i++)
    {

        for(j=0; j<q.length(); j++)
        {
            if(q[i]<q[j])
            {
                temp=q[i];
                q[i]=q[j];
                q[j]=temp;
            }
        }
    }

       for(i=0; i<z.length(); i++)
    {

        for(j=0; j<z.length(); j++)
        {
            if(z[i]<z[j])
            {
                temp=z[i];
                z[i]=z[j];
                z[j]=temp;
            }
        }
    }

    if(q==z)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
