#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    ll cnt=0;
    for(ll i=1;i<=d;i++)
    {
        if(i%k==0||i%l==0||i%m==0||i%n==0)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;


    return 0;
}
