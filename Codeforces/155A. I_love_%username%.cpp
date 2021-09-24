#include<iostream>
using namespace std;
int main()
{
    int n,i,c=0,a[1000],s=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int max=a[0],min=a[0];
    for(i=0; i<n; i++)
    {
        if(a[i]<max)
        {
            c++;
            max=a[i];
        }
        else if(a[i]>min)
        {
            c++;
            min=a[i];
        }

    }
    cout<<c;
}
