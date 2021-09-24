#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=1;
    cin>>n;
    for(i=1; i<n; i++)
    {
        sum=sum+(12*i);
    }
    cout<<sum;
}
