#include<iostream>
using namespace std;
int main()
{
    int n,i,c=1;
    string s,p,q;
    cin>>n;
    cin>>p;
    for(i=1; i<n; i++)
    {
        cin>>s;
        if(s==p)
        {
            c++;
            p=s;
        }
        else
        {
            c--;
            q=s;
        }
    }
    if(c>=0)
    {
        cout<<p;
    }
    else
    {
        cout<<q;
    }
}
