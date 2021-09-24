#include<iostream>
using namespace std;
int main()
{
    int n,i,c=0;
    string s;
    cin>>n>>s;
    for(i=0; i<n; i++)
    {
        if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x')
        {
            c++;
        }
    }
    cout<<c;
}
