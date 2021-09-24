#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t!=0)
    {
        cin>>n;
        int a[n];
        int c=0,i;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==1 || a[i]==3)
            {
                c++;
            }
        }
        cout<<c<<endl;
        t--;
    }
}
