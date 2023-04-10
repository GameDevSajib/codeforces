#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    char ch1,ch2;
    string s;
    cin>>s;
    ll cnt1=0,cnt2=0;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]>='a')
        {
            cnt1++;
        }
        else {
            cnt2++;
        }
    }
    //cout<<cnt1<<endl;
    //cout<<cnt2<<endl;
    if(cnt1>=cnt2)
    {
        for(ll i=0;i<s.size();i++)
        {
            ch1=tolower(s[i]);
            cout<<ch1;

        }
    }
    else{
        for(ll i=0;i<s.size();i++)
        {
            ch2=toupper(s[i]);
            cout<<ch2;
        }
    }


    return 0;
}
