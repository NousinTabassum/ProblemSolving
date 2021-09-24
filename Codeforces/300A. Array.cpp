#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    vector<int>v1,v2,v3;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]<0)
        {
            v1.push_back(a[i]);
        }
        else if(a[i]>0)
        {
            v2.push_back(a[i]);
        }
        else
        {
            v3.push_back(a[i]);
        }
    }
    cout<<"1"<<" "<<v1[0]<<endl;
    if(v2.size()>0)
    {
        cout<<v2.size()<<" ";
        for(int i=0; i!=v2.size(); i++)
        {
            cout<<v2[i]<<" ";
        }
        cout<<endl;
        cout<<v1.size()<<" ";
        for(int i=1; i!=v1.size(); i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<"0"<<endl;
    }
    else
    {
        cout<<"2"<<" "<<v1[1]<<" "<<v1[2]<<endl;
        cout<<v1.size()-2<<" ";
        for(int i=3; i!=v1.size(); i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<"0"<<endl;


    }

}
