#include<iostream>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    if(n%4==0 || n%7==0)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    while(n!=0)
    {
        a=n%10;
        if(a%4!=0 && a%7!=0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        n=n/10;
    }
    cout<<"YES"<<endl;
}













/*if(n%4==0 || n%7==0 || n%47==0 || n%74==0 || n%447==0 || n%474==0 ||n%477==0 || n%774==0 || n%744==0 || n%747==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
*/
