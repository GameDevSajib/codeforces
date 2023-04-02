#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        ll i,j;
        ll ans=-1;
        ll t;
        cin>>t;
        int a[100005];
        int b[100005];
        for(i=0;i<t;i++)
        {
            cin>>a[i];
        }

        for(i=0;i<256;i++)
        {
          ll k=0;
        for(j=0;j<t;j++)
        {
            k^=(a[j]^i);
        }
            if(k==0)
            {
                ans=i;
                break;
            }
        }
        cout<<ans<<endl;

    }



    return 0;
}
