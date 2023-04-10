//BISMILLAH
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll flag=0;
    string s;
    cin>>s;
    if(s=="47"||s=="447"||s=="744")
    {
        flag=0;
    }
    else{
    ll cnt=0;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='4'||s[i]=='7')
        {
            cnt++;
        }
    }
    if(cnt==4||cnt==7)
    {
        flag=0;
        //cout<<"YES"<<endl;
    }
    else
        flag=1;//cout<<"NO"<<endl;
    }
    if(flag==1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;


    return 0;
}
