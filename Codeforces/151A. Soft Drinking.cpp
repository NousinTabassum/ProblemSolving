#include<iostream>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np,total_l,total_slice,total_salt;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    total_l=(k*l)/nl;
    total_slice=c*d;
    total_salt=p/np;
    int m=std::min(total_slice,total_salt);
    cout<<std::min(m,total_l)/n;


}
