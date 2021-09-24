#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    char a[10][10];
    vector<char>v;
    vector<int>v2;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cin>>a[i][j];
            if(a[i][j]!='.')
            v.push_back(a[i][j]);
        }
    }
   if(v.size()==0)
   {
       cout<<"YES"<<endl;
       return 0;
   }
    for(int i=0; i!=v.size(); i++)
    {
        v2.push_back(count(v.begin(),v.end(),v[i]));
    }

   int  p=*max_element(v2.begin(),v2.end());
   if(k*2>=p)
   {
       cout<<"YES";
   }
   else
   {
       cout<<"NO";
   }

}
