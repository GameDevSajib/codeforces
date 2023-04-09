#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll cnt=0;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1])
        {
            cnt++;
        }
        //else cnt=0;
    }
    cout<<cnt<<endl;




    return 0;
}
