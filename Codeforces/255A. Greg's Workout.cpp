#include<bits/stdc++.h>
using namespace std;
bool comp(int p,int q)
{
    return(p<q);
}

int main()
{
    int n,a=0,b=0,c=0,i;
    cin>>n;
    int s[n];
    for(i=1; i<=n; i++)
    {
        cin>>s[i];
        if(i%3==1)
        {
            a=a+s[i];
        }
        else if(i%3==2)
        {
            b=b+s[i];
        }
        else if(i%3==0)
        {
            c=c+s[i];
        }

    }
   int p= std::max({a,b,c},comp);
   if(p==a)
   {
       cout<<"chest"<<endl;
   }
    else if(p==b)
   {
       cout<<"biceps"<<endl;
   }

    else if(p==c)
   {
       cout<<"back"<<endl;
   }


}
