#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
    return(a<b);
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    vector<int>v1,v2,v3;
    for(int i=0; i<n; i++)
    {
        if(a[i]==1)
        {
           v1.push_back(i+1);
        }
        else if(a[i]==2)
        {
            v2.push_back(i+1);
        }
        else
        {
            v3.push_back(i+1);
        }

    }
    int x,y,z;
        x=v1.size();
        y=v2.size();
        z=v3.size();
        int p=min({x,y,z},cmp);
        cout<<p<<endl;
        for(int i=0; i<p; i++)
        {
            cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i];
            v1.pop_back();
            v2.pop_back();
            v3.pop_back();
            cout<<endl;
        }


}
