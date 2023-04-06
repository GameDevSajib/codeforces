#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll ans=0;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n=3;
        int a[n+5];
        ll cnt=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=0;i<3;i++)
        {
            if(a[i]==1) cnt++;

        }
        //cout<<cnt<<endl;
        if(cnt>=2)  ans++;



    }

    cout<<ans<<endl;

    return 0;
}
