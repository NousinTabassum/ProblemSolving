#include<iostream>
using namespace std;
int main()
{
    int a[10], i, j, k=0;
    for(i=0; i<4; i++)
    {
        cin>>a[i];
        for(j=0; j<i; j++)
        {
            if(a[i]==a[j])
            {
                k++;
                break;

            }

        }
    }
    cout<<k;

}
