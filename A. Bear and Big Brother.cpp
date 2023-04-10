#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b;
    cin>>a>>b;
    int v1[100005];
    int v2[100005];
    ll k=0,l=0;
    for(ll i=1,j=1;i<=100,j<=100;i=i*3,j=j*2)
    {
        ll x=a*i;
        v1[k]=x;
        k++;
        ll y=b*j;
        v2[l]=y;
        l++;
    }
    /*cout<<"for x:"<<endl;
    for(ll i=0;i<k;i++)
    {
        cout<<v1[i]<<endl;
    }
    cout<<" for y "<<endl;
    for(ll i=0;i<l;i++)
    {
        cout<<v2[i]<<endl;
    }*/
    ll cnt=0;
    for(ll i=0;i<k;i++)
    {
        if(v1[i]<=v2[i])
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;



    return 0;
}
