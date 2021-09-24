#include<iostream>
using namespace std;
int main()
{
    int n,X=0;
    string s;
    cin>>n;
    while(n!=0)
    {
        cin>>s;
        n--;
        if(s=="X++")
        {
            X++;
        }
        else if(s=="++X")
        {
            ++X;
        }
        else if(s=="X--")
        {
            X--;
        }
        else if(s=="--X")
        {
            --X;
        }
    }
    cout<<X;


}
