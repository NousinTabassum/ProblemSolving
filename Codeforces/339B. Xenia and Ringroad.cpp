#include<iostream>
using namespace std;
int main()
{
      long long n,m,a[100000],i,s=0;
      cin>>n>>m;
        for(i=0; i<m; i++)
        {
            cin>>a[i];

        }
        for(i=1; i<m; i++)
        {
            if(a[i]==a[i-1])
            {
                s=s+0;
            }
            else if(a[i]>a[i-1])
            {
                s=s+a[i]-a[i-1];
            }
            else if(a[i]<a[i-1])
            {
                s=s+a[i]+(n-a[i-1]);
            }
        }
        cout<<s+a[0]-1;

}
