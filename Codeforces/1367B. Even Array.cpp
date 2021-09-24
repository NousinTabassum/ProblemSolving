#include<iostream>
using namespace std;
int main()
{
    int n,m,i,a[1000],c=0,s=0,j;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>m;
        c=0;
        s=0;
        for(j=0; j<m; j++)
        {
            cin>>a[j];

            if(j%2==0 && a[j]%2!=0)
            {
                c++;
                s++;
            }
            else if(j%2!=0 && a[j]%2==0)
            {
                c--;
                s++;
            }
        }
        if(c!=0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
           cout<<s/2<<endl;
        }
    }



}
