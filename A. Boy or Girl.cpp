#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    set<char>se;
    set<char>::iterator it;
    string s;
    cin>>s;
    for(ll i=0;i<s.size();i++)
    {
        se.insert(s[i]);
    }
    ll cnt=0;
    for(it=se.begin();it!=se.end();it++)
    {
        //cout<<*it<<endl;
        cnt++;
    }
    if(cnt%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;




    return 0;
}
