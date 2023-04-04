#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    map<string,ll>m;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        string s;
        cin>>s;
        ll x=m[s]++;
        //cout<<x<<endl;
        if(m[s]==1) cout<<"OK"<<endl;
        else cout<<s<<m[s]-1<<endl;

    }




    return 0;
}
