#include<iostream>
using namespace std;
int main()
{
    int n,m,i,c=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>m;
        c=0;
        while((m%6)!=1 || m>5 && m%2!=0)
        {
            if(m<6 && m%2==0)
            {
              c=-1;
              break;
            }
            else
            {
                if(m%6==0)
                {
                    m=m/6;
                    c++;
                }
                else
                {
                    m=m*2;
                    c++;
                }
            }
        }
        cout<<c<<endl;

    }
}
