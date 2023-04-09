//BISMILLAH
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    vector<char>v;
     string s;
     char ch;
     cin>>s;
     for(ll i=0;i<s.size();i++)
     {
         ch=toupper(s[0]);
     }
     //cout<<ch<<endl;
     v.pb(ch);
     for(ll i=1;i<s.size();i++)
     {
         //cout<<s[i];
         v.pb(s[i]);
     }
     for(ll i=0;i<v.size();i++)
     {
         cout<<v[i];
     }
     //cout<<ch<<endl;



}
