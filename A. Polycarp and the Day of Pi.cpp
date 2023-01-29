#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       string s1;
       string s2="314159265358979323846264338327";
       cin>>s1;
       ll cnt=0;
       for(int i=0;i<s1.size();i++)
       {
          if(s1[i]==s2[i])
          {
              cnt++;
          }
          else{
            break;
          }
       }
       cout<<cnt<<endl;





    }



    return 0;
}

