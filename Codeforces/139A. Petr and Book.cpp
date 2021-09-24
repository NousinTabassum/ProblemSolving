#include<iostream>
using namespace std;
int main()
{
    int n,i,j,sum=0;
    cin>>n;
    int a[n];

    for(i=1; i<=7; i++)
    {
        cin>>a[i];

    }
    for(j=0; j<=n; j++)
    {
        for(i=1; i<=7; i++)
        {
            sum=sum+a[i];
            if(sum>=n){
                j=i;
            cout<<j<<endl;
            return 0;
            }
        }
    }

}
