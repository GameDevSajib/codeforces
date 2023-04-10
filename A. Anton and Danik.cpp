//BISMILLAH
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll cnt1=0,cnt2=0;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='A')
        {
            cnt1++;
        }
        if(s[i]=='D')
        {
            cnt2++;
        }
    }
    if(cnt1>cnt2) cout<<"Anton"<<endl;
    else if(cnt1<cnt2) cout<<"Danik"<<endl;
    else if(cnt1==cnt2) cout<<"Friendship"<<endl;






}
