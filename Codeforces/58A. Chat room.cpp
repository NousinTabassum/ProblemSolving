#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='h' && c==0)
        {
            c=1;
        }
         else if(s[i]=='e' && c==1)
        {
            c=2;
        }
        else if(s[i]=='l' && c==2)
        {
            c=3;
        }
        else if(s[i]=='l' && c==3)
        {
            c=4;
        }
        else if(s[i]=='o' && c==4)
        {
            c=5;
        }
    }
    if(c==5)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
