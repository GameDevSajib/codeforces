#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll k,n,w;
    cin>>k>>n>>w;
    ll x=k*((w*(w+1))/2);
    ll y=(x-n);
    if(y<0) cout<<0<<endl;
    else cout<<y<<endl;



    return 0;
}
