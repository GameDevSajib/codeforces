#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k,x;
    cin>>n>>k;
    int a[n+5];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll cnt=0;
    for(ll i=0;i<n;i++)
    {
        if(a[i]>=a[k-1]&&a[i]!=0)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;



    return 0;
}
