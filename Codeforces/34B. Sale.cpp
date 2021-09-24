#include<iostream>
using namespace std;
int main()
{
    int n,m,i,c=0,sum=0,j,temp;
    cin>>n>>m;
    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i]<a[j])
            {
               temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0; i<m; i++)
    {
       if(a[i]<0)
       {
           sum=sum+a[i];
       }
       else
       {
           cout<<sum*(-1);
           return 0;
       }
    }
    cout<<sum*(-1);
    return 0;

}
