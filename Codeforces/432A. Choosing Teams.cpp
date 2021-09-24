#include<iostream>
using namespace std;
int main()
{
    int n,k,i,j,c=0,a[2000];
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]+k<=5)
        {
            c++;
        }
    }
    cout<<c/3;
}
