#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,ans=0;
    cin>>t;
    while(t--)
    {
        ll x;
        ll cnt=0;

        for(ll i=0;i<3;i++)
        {
            cin>>x;
            if(x==1){
                cnt++;
            }
        }
        if(cnt>=2)
        {
            ans++;
        }



    }
    cout<<ans<<endl;

    return 0;
}
