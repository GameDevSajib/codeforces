#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
       ll n;
       cin>>n;
       string s;
       cin>>s;
       ll x=0;
       ll y=0;
       for(ll i=0;i<n;i++)
       {
           if(s[i]=='U') {x++;}
           if(s[i]=='D') {x--;}
           if(s[i]=='R') {y++;}
           if(s[i]=='L') {y--;}
           if(x==1&&y==1){
           cout<<"YES\n";
           return;
       }
       }
       cout<<"NO\n";




}
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
       solve();


   }




    return 0;
}
