#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,i,j,c=0;
    cin>>n;
    char ch[100];
    for(i=0; i<n; i++)
    {
        cin>>ch[i];

        for(j=i-1; j<i; j++)
        {
            if(ch[i]==ch[j])
            {
                c++;

            }
        }
    }
    cout<<c;
}
