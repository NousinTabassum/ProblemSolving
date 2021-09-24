#include<iostream>
using namespace std;
int main()
{
    int i,j;
    string s;
    cin>>s;
    for(i=0; i<s.length(); i++)
    {
        if(s[i]=='.')
        {
            cout<<"0";
        }
        if(s[i]=='-' && s[i+1]=='.')
        {
            cout<<"1";
            i=i+1;

        }
         if(s[i]=='-' && s[i+1]=='-')
        {
            cout<<"2";
            i=i+1;
        }

    }
}
